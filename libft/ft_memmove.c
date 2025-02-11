/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:11:02 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/28 13:46:01 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*int	main(void)
{
      char dest[] = "sammmthetkid";
      char dest1[] = "samthekid";
      char dest2[] = "samthekid";
      char src[] = "jojony1";
      char src1[] = "jojony";
      char src2[] = "jojony";

      ft_memmove(dest, src, 8);
      puts(dest);
      memmove(dest1, src1, 8);
      puts(dest1);
      memcpy(dest2, src2, 8);
      puts(dest2);
}*/
