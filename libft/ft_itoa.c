/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:28:26 by ntomas-a          #+#    #+#             */
/*   Updated: 2024/10/28 13:45:11 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_itoa(int n)
{
	int		len;
	long	nbr;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	else if (nbr == 0)
		len++;
	while (nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_size_itoa(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}

/*int		main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;

	a = 123456789;
	b = 1;
	c = 0;
	d = 0001342;
	e = -42;
	f = -2147483648;
	printf("%s", "a = ");
	printf("%d\n", a);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(a));
	printf("%s", "b = ");
	printf("%d\n", b);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(b));
	printf("%s", "c = ");
	printf("%d\n", c);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(c));
	printf("%s", "d = ");
	printf("%d\n", d);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(d));
	printf("%s", "e = ");
	printf("%d\n", e);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(e));
	printf("%s", "f = ");
	printf("%d\n", f);
	printf("%s", "ft_itoa = ");
	printf("%s\n\n", ft_itoa(f));
	
	return(0);
}*/
