/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:04:45 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:04:46 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			array;
	void			*ptr;

	array = count * size;
	if (count && size && array / count != size)
		return (NULL);
	ptr = malloc(array);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, array);
	return (ptr);
}

/*int	main(void)
{
	size_t	n = 4;
	size_t	i = 1;
	char	*a = ft_calloc(n, 0);
	char	*b = calloc(n, 0);
	while (i < n)
	{
		printf("%p\n", &a[i]);
		i++;
	}
	free(a);
	i = 0;
	while (i < n)
	{
		printf("%p\n", &b[i]);
		i++;
	}
	free(b);
	return (0);
}*/
