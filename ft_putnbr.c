/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:22:19 by astefans          #+#    #+#             */
/*   Updated: 2024/03/18 13:33:24 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, size_t *len)
{
	if (nbr == -2147483648)
	{
		ft_putnbr((nbr / 10), len);
		ft_putchar('8', len);
	}
	else if (nbr < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-nbr, len);
	}
	else
	{
		if (nbr > 9)
			ft_putnbr((nbr / 10), len);
		ft_putchar((nbr % 10 + '0'), len);
	}
}
