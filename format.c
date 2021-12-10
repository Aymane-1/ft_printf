/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/10 19:03:10 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	format_specifier(va_list(ptr), char frmt)
{
	int n;
	va_start(ptr, frmt);
    if (*frmt == 'd')
		n = ft_putnbr(va_arg(ptr, int));
	if (*frmt == 'c')
		n = ft_putchar(va_arg(ptr, char));
	if (*frmt == 's')
		n = ft_putstr(va_arg(ptr, char *));
	if (*frmt == 'p')
		n = ft_putstr(va_arg(ptr, char *));
	if (*frmt == 'i')
		n = ft_putnbr(va_arg(ptr, unsigned int));
	if (*frmt == 'u')
		n = ft_putnbr(va_arg(ptr, unsigned int));
	if (*frmt == 'x')
		n = ft_hex_low(va_arg(ptr, char));
	if (*frmt == 'X')
		n = ft_hex_up(va_arg(ptr, char));
	va_end(ptr);
}

int main()
{   
	int d= 12;
	char *ptr = d;
    format_specifier(d);
	printf("%s", d);
}  

