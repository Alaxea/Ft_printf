/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:48:42 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 10:03:40 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, size_t *len, int low_or_up)
{
	if (nb >= 16)
		ft_puthex(nb / 16, len, low_or_up);
	if (low_or_up)
		ft_putchar(HEX_LOW[nb % 16], len);
	else
		ft_putchar(HEX_UPP[nb % 16], len);
}
