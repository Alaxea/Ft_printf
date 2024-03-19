/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:06:58 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 14:26:40 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <stdlib.h>

int	main(void)
{
	ft_printf("Hello, %s!\n", "world");
	
	//test do putnbr
	size_t *count = (size_t *)malloc(sizeof(size_t));
        *count = 0;
	ft_putnbr(-2147483648, count);
	printf("\n");
	printf("liczba znaków to %zu\n", *count);
	free(count);

	//test do putchar
	size_t *len = (size_t *)malloc(sizeof(size_t));
	*len = 0;
	ft_putchar('C', len);
	printf("\n");
	printf("liczba wydrukowanych znaków to %zu\n", *len);
	free(len);

	//test do putstr
	size_t *counter = (size_t *)malloc(sizeof(size_t));
        *counter = 0;
        ft_putstr("ice cream man", counter);
        printf("\n");
        printf("liczba wydrukowanych znaków to %zu\n", *counter);
        free(counter);

	//test do puthex
	unsigned long int length = 0;
	unsigned int number = 255;
	ft_puthex(number, &length, 1);
	printf("\n");
	printf("szesnastkowa reprezentacja liczby %u w malych literach to ", number);
	printf("liczba znaków to %lu\n", length);

	//test do putpointer
	unsigned long int dlugosc = 0;
	unsigned long int pointer = 0x1234567;
	ft_putpointer(pointer, &dlugosc);
	printf("\n");
	printf("pointer in hexadecimal is: %lu ", pointer);
	//ft_putpointer(pointer, &dlugosc, 0);
	printf("liczba znaczkow to %lu\n", dlugosc);

	//test do putunsignint
	unsigned long int leng = 0;
	unsigned long int nb = 142;
	ft_putunsignint(nb, &leng);
	printf("\n");
	printf("unsigned in decimal base is: %lu ", nb);
	printf("liczba znakow to %lu\n", leng);	
	return (0);

}
