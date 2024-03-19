/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:07:32 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 19:32:16 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, size_t *len)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, len);
		str++;
	}
}
