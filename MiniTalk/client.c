/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman <ayaman@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:48:32 by ayman             #+#    #+#             */
/*   Updated: 2022/08/10 16:08:35 by ayman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylibrary.h"

void	pushserver(int pid, char *str)
{
	int	size;
	int	index;

	index = 0;
	while (str[index])
	{
		size = 8;
		while (size-- > 0)
		{
			if (((str[index] >> size) & 1) == 0)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(150);
		}
		index++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
		write(1, "more or less arguments!\n", 24);
	else
	{
		if (ft_atoi(av[1]))
			pushserver(ft_atoi(av[1]), av[2]);
		else
			write(1, "wrong or missing PID number!\n", 29);
	}
	return (0);
}
