/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                         :+:      :+:  :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:05:46 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/11 18:57:41 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void 	ft_hexa_low(int n)
{
	long	nb;
	char	*hex;

	hex = "0123456789abcdef";
	nb = n;
	if (nb > 15)
	{
		ft_hexa_low(nb / 16);
		ft_hexa_low(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
	}

void	address(int *num)
{
	write(1, "0X", 2);
	return(ft_hexa_low)
}
