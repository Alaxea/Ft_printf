/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:46:58 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 14:10:42 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

# define HEX_UPP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, size_t *len);
void	ft_putstr(char *str, size_t *len);
void	ft_putnbr(int nbr, size_t *len);
void	ft_putpointer(unsigned long int n, size_t *len);
void	ft_putunsignint(unsigned long int n, size_t *len);
void	ft_puthex(unsigned int nb, size_t *len, int low_or_up);

#endif
