/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylibrary.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayman <ayaman@student.42kocaeli.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:01:10 by ayman             #+#    #+#             */
/*   Updated: 2022/08/09 16:02:23 by ayman            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIBRARY_H
# define MYLIBRARY_H

# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

//Libftf Partition
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	ft_putnbr(int numpid);
void	ft_putchar(char c);

//Server Partition
void	printer(int s);

//client Partition
void	pushserver(int pid, char *str);

#endif
