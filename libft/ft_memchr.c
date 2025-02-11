/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:05:35 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/28 13:45:36 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "o jardim da minha mae e muito lindo";
	int	c = 109;
	size_t n = 12;
	unsigned char	*test;

	test = ft_memchr(str, c, n);
	printf("%s\n", test);
}*/
