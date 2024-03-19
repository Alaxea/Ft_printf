/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:14:40 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 14:10:17 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(unsigned long int n, size_t *len)
{
	if (!n)
	{
		write(1, "(nil)", 5);
		*len += 5;
		return ;
	}
	else
	{
		if (n < 16)
		{
			ft_putstr("0x", len);
			ft_putchar(HEX_LOW[n % 16], len);
			return ;
		}
		ft_putpointer(n / 16, len);
		ft_putchar(HEX_LOW[n % 16], len);
	}
}
