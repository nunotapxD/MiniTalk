/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:07:36 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/28 22:47:59 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*substr;

	i = 0;
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	else if (len + start > str_len)
		substr = malloc(sizeof(char) * (str_len - start + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len && start < str_len)
	{
		substr[i] = s[start];
		i++; 
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char	s[] = "o samuel foi com o joao ao shopping";
	unsigned int	start = 8;
	size_t	len = 42;

	puts(ft_substr(s, start, len));
}*/
