/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:05:10 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/09 13:06:37 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

char	ft_putchar(char c)
{
	write(1, &c, 1);
}
