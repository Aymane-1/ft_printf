/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:02:44 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/11 18:38:48 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	format_specifier(char *format, ...);
char	ft_putchar(char c);
char 	ft_putstr(char *str);
void	ft_putnbr(int c);
void	ft_address(char *ptr);
void	hexa_low(int n);
void	hexa_up(int n);
#endif 

