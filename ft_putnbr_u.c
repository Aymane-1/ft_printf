/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 08:57:12 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/14 08:58:22 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *num)
{	
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, num);
	if (nb > 9)
	{
		ft_putnbr(nb / 10, num);
		ft_putnbr(nb % 10, num);
	}
}
