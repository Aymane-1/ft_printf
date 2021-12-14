/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:28:56 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/13 22:28:01 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ptr;
	int		i;
	int		num;

	va_start(ptr, fmt);
	i = -1;
	num = 0;
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
			format_specifier(ptr, fmt[i + 1], &num);
			i++;
		}
		else if (fmt[i] != '%')
			ft_putchar(fmt[i], &num);
	}
	va_end(ptr);
	return (num);
}
