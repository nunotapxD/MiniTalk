/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:04:28 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 12:14:12 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = ((res * 10) + (str[i] - 48));
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	const	char str[] = "    \n   -1245232425safa12";

	printf("My: %d\n", ft_atoi(str));
	printf("Fuction Original: %d\n", atoi(str));
}*/
