/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman <ayaman@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:05:56 by ayman             #+#    #+#             */
/*   Updated: 2022/08/10 16:08:35 by ayman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"mylibrary.h"

void	printer(int s)
{
	static int	size;
	static char	sb;

	if (s == SIGUSR1)
		sb += (1 << (7 - size++));
	else
		sb += (0 << (7 - size++));
	if (size == 8)
	{
		write(1, &sb, 1);
		size = 0;
		sb = 0;
	}
}

int	main(void)
{
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, printer);
	signal(SIGUSR2, printer);
	while (1)
	{
		pause();
	}
}
// sb == shifted bit