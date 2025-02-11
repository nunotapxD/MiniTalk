/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:05:14 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:05:15 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint(01));
	printf("%d\n", ft_isprint(303));
	printf("%d\n", ft_isprint(63));
	printf("%d\n", ft_isprint(74));
	printf("%d\n", ft_isprint(17));
}*/
