/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:09:21 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:09:23 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	j = ldest;
	if (ldest >= size)
		return (size + lsrc);
	while (i < size - 1 - ldest && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ldest + lsrc);
}

/*#include <bsd/string.h>
int	main(void)
{
	char	dst[8] = "samuel";
	const	char src[8] = "thekid";
	size_t	size = 6;
	
	printf("%s tamanho do source: %zu \n",src, ft_strlcat(dst, src, size));
	printf("Ori: %s tamanho do source: %zu\n",src, strlcat(dst, src, size));
}*/
