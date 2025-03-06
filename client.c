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

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	send_char(int pid, char c)
{
	int	i;
	
	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}
}

void	signal_action(int pid, char *str)
{
	while (*str)
		send_char(pid, *str++);
	send_char(pid, '\n');
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac != 3)
	{
		ft_putstr("Error: wrong format\n");
		ft_putstr("Try: ./client <pid> <string>\n");
		return (1);
	}
	pid = ft_atoi(av[1]);
	if (pid <= 0)
	{
		ft_putstr("Error: invalid PID\n");
		return (1);
	}
	signal_action(pid, av[2]);
	return (0);
}