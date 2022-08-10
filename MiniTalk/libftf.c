/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman <ayaman@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:00:25 by ayman             #+#    #+#             */
/*   Updated: 2022/08/09 15:59:05 by ayman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylibrary.h"

int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	negative;

	i = 0;
	result = 0;
	negative = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * negative);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int numpid)
{
	if (numpid >= 10)
	{
		ft_putnbr(numpid / 10);
		numpid = numpid % 10;
	}
	if (numpid < 10)
		ft_putchar(numpid + 48);
}
