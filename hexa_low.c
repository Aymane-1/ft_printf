/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:48:15 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/10 18:50:20 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void ft_hexa_low(int n)
{
	long nb;
	char hex[16] = "0123456789abcdef";

	nb = n;

	if (nb > 15)
	{
		ft_hexa_low(nb / 16);
		ft_hexa_low(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
	}

