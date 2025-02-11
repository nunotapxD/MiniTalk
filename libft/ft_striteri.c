/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:47 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:06:48 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	print_char_with_index(unsigned int i, char *c)
{
	printf("Caractere na posição %u: %c\n", i, *c);
}

int	main(void)
{
	char str[] = "Samumumumu";

	ft_striteri(str, print_char_with_index);
	return (0);
}*/
