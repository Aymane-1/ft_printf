/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:05:55 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/13 22:41:23 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(char *s, int *num)
{
	int	i;

	i = 0;
	if (s == NULL)
		ft_putstr("(null)", num);
	else
	{
		while (s[i])
		{
			ft_putchar(s[i], num);
			i++;
		}
	}
}
