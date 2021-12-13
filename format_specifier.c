/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/13 16:49:29 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	format_specifier(va_list(ptr), char frmt, int *num)
{
	if (frmt == 'd')
		ft_putnbr(va_arg(ptr, int), num);
	if (frmt == 'c')
		ft_putchar(va_arg(ptr, int), num);
	if (frmt == 's')
		ft_putstr(va_arg(ptr, char *), num);
	if (frmt == 'p')
		ft_address(va_arg(ptr, unsigned long), num);
	if (frmt == 'i')
		ft_putnbr(va_arg(ptr, int), num);
	if (frmt == 'u')
		ft_putnbr(va_arg(ptr, unsigned int), num);
	if (frmt == 'x')
		ft_hex_low(va_arg(ptr, unsigned int), num);
	if (frmt == 'X')
		ft_hex_up(va_arg(ptr, unsigned int), num);
	if (frmt == '%')
		ft_putchar('%', num);
}
