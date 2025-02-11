/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:05:59 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:06:01 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int   main(void)
{
      char  str[23] = "samuelthekid";
      int   c = 65;
      size_t n = 7;

      puts(str);
      ft_memset(str, c, n);
      puts(str);
      return (0);
}*/
