/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:37:40 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 19:06:23 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_formats(char *str, va_list args, size_t *len)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*str == 'p')
		ft_putpointer(va_arg(args, unsigned long int), len);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*str == 'u')
		ft_putunsignint(va_arg(args, unsigned long int), len);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'X')
			ft_puthex(va_arg(args, unsigned int), len, 0);
		else
			ft_puthex(va_arg(args, unsigned int), len, 1);
	}
	else if (*str == '%')
		ft_putchar(*str, len);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	size_t		len;

	if (!str)
		return ('\0');
	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_formats((char *)str, args, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	va_end(args);
	return (len);
}
