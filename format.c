/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/07 21:23:25 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include "libftprintf.h"*/
#include <stdio.h>
#include <stdarg.h>
void format_specifier(char format, ...)
{
	va_list(ptr);
	va_start(ptr, format);
    if (format == 'd')
		int i = va_arg(format, int);
		return (ft_putnbr(i));
	if (format == 'c')
		char c = va_arg(format, char);
		return (ft_putchar(c));
	if (format == 's')
		char *string = va_arg(format, char *);
		return (ft_putstr(string));
	if (format == 'p')
		char *address = va_arg(format, char *);
		return (ft_putstr(address));
	if (format == 'i')
		unsigned int j = va_arg(format, unsigned int);
		return (ft_putnbr(j));
	if (format == 'u')
		unsigned int k = va_arg(format, unsigned int);
		return (ft_putnbr(k));
	if (format == 'x')
		char *hex = va_arg(format, char);
		return (ft_putstr(hex));
	if (format == 'X')
		char *HEX = va_arg(format, char);
		return (ft_putstr(HEX));
	va_end(ptr);
}

int main()
{   
	int d= 12;
    printf("%d", format_specifier(d));
}  

