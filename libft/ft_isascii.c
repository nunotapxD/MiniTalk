/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:04:59 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:05:01 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", ft_isascii(3178));
	printf("%d\n", ft_isascii(113));
	printf("%d\n", ft_isascii(14));
	printf("%d\n", ft_isascii(-24));
	printf("%d\n", isascii(3178));
	printf("%d\n", isascii(113));
	printf("%d\n", isascii(14));
	printf("%d\n", isascii(-24));
}*/
