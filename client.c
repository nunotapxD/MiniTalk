/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 02:47:15 by ntomas-a          #+#    #+#             */
/*   Updated: 2025/03/06 00:00:00 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#include "minitalk.h"

void	signal_action(int pid, char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*str)
	{
		c = *(str);
		while (i < 8)
		{
			if (c << i & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(1000);
		}
		str++;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 3)
	{
		ft_printf("Invalid number of arguments.\n");
		ft_printf("Format: [./client <SERVER ID (PID)> <STRING>]\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		while (av[1][i])
		{
			if (!ft_isdigit(av[1][i]))
			{
				return (0);
			}
			i++;
		}
		signal_action(ft_atoi(av[1]), av[2]);
	}
}
