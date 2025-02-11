/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:06:28 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/28 22:47:59 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			word++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (word);
}

static int	ft_strlen_sep(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*ft_print_words(char const *str, char c)
{
	size_t	lenstr;
	char	*array;

	lenstr = ft_strlen_sep(str, c);
	array = (char *)malloc((lenstr + 1) * sizeof(char));
	ft_strlcpy(array, str, lenstr + 1);
	return (array);
}

static char	**ft_allocate(char **array, char const *s, int count, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < count && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			array[j] = ft_print_words((s + i), c);
			j++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
		}
	}
	array[j] = 0;
	return (array);
}

char	**ft_split(char const	*s, char c)
{
	char	**array;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_allocate(array, s, count, c);
	return (array);
}

int	main(void)
{
	char	*str = "Samuel Sam The Kid o Putor";
	char	sepa = ' ';
	char	**rest = ft_split(str, sepa);
	int	i = 0;

	while (rest[i])
	{
		puts(rest[i]);
		free(rest[i]);
		i++;
	}
	free(rest);
	return (0);
}
