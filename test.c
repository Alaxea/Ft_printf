/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:06:58 by astefans          #+#    #+#             */
/*   Updated: 2024/03/19 16:21:45 by astefans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    int len;

    //Test with a simple string
    len = ft_printf("Hello, world!\n");
    printf("Length: %d\n", len);

    /*Test with a character
    len = ft_printf("%c\n", 'A');
    printf("Length: %d\n", len);

    // Test with a string
    len = ft_printf("%s\n", "This is a test string");
    printf("Length: %d\n", len);

    // Test with an integer
    len = ft_printf("%d\n", 42);
    printf("Length: %d\n", len);

    // Test with an unsigned integer
    len = ft_printf("%u\n", 42);
    printf("Length: %d\n", len);

    // Test with a pointer
    int x = 42;
    len = ft_printf("%p\n", &x);
    printf("Length: %d\n", len);

    // Test with hexadecimal (lowercase)
    len = ft_printf("%x\n", 255);
    printf("Length: %d\n", len);

    // Test with hexadecimal (uppercase)
    len = ft_printf("%X\n", 255);
    printf("Length: %d\n", len);

    //Test with a percent sign
    len = ft_printf("Percent sign: %%\n");
    printf("Length: %d\n", len);*/

    return 0;
}