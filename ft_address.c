/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                         :+:      :+:  :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:05:46 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/13 22:40:08 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_address(unsigned long nb, int *num)
{
	ft_putstr("0x", num);
	ft_hex_low(nb, num);
}
