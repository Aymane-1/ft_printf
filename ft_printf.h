/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:02:44 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/14 08:59:46 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *num);
void	ft_putstr(char *s, int *num);
void	ft_putnbr(int n, int *num);
void	ft_putnbr_u(unsigned int nb, int *num);
void	ft_address(unsigned long nb, int *num);
void	ft_hex_low(unsigned long nb, int *num);
void	ft_hex_up(unsigned long nb, int *num);
void	format_specifier(va_list ptr, char frmt, int *num);

#endif