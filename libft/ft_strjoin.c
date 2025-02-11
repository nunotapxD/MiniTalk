/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:57 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/23 11:06:59 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	i;
	size_t	j;
	char	*nova;

	if (!s1 || !s2)
		return (NULL);
	nova = malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char) + 1);
	if (!nova)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nova[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		nova[i] = s2[j];
		j++;
		i++;
	}
	nova[i] = '\0';
	return (nova);
}

/*int	main(void)
{
	char	s1[] = "Samthekid ";
	char	s2[] = "e um burro ";

	puts(s1);
	puts(s2);
	puts(ft_strjoin(s1, s2));
}*/
