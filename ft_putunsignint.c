/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:07:51 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 10:05:05 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignint(unsigned long int n, size_t *len)
{
	if (n > 9)
	{
		ft_putunsignint(n / 10, len);
		ft_putunsignint(n % 10, len);
	}
	else
		ft_putchar(n + '0', len);
}
