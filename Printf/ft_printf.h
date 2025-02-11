/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomas-a <ntomas-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 02:46:24 by ntomas-a          #+#    #+#             */
/*   Updated: 2025/01/28 02:46:24 by ntomas-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_strlen2(char *str);
int	ft_putchar(char ch);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_put_u(unsigned int nb);
int	ft_puthex(unsigned int n, int is_lower);
int	ft_put_pointer(unsigned long n);

#endif
