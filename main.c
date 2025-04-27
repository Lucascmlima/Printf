/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:15:21 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/27 17:15:22 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int count1, count2;

    // Testando %c
    printf("Usando printf: ");
    count2 = printf("Testando %c -> 'A'\n", 'A');
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %c -> 'A'\n", 'A');
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Testando %s
    printf("Usando printf: ");
    count2 = printf("Testando %s -> Hello, World!\n", "Hello, World!");
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %s -> Hello, World!\n", "Hello, World!");
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Testando %d e %i
    printf("Usando printf: ");
    count2 = printf("Testando %d -> -42\n", -42);
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %d -> -42\n", -42);
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Testando %u
    printf("Usando printf: ");
    count2 = printf("Testando %u -> 4294967295\n", 4294967295U);
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %u -> 4294967295\n", 4294967295U);
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Testando %x e %X
    printf("Usando printf: ");
    count2 = printf("Testando %x -> 255 em hexadecimal (minúsculo): %x\n", 255);
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %x -> 255 em hexadecimal (minúsculo): %x\n", 255);
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Corrigir a impressão de %X
    count2 = printf("Usando printf: Testando %X -> 255 em hexadecimal (maiúsculo): %X\n", 255);
    ft_printf("Usando ft_printf: Testando %X -> 255 em hexadecimal (maiúsculo): %X\n", 255);
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Testando %p
    int *ptr = NULL;
    printf("Usando printf: ");
    count2 = printf("Testando %p -> Ponteiro nulo: %p\n", (void*)ptr);
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %p -> Ponteiro nulo: %p\n", (void*)ptr);
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    // Testando %%
    printf("Usando printf: ");
    count2 = printf("Testando %% -> Sinal de porcentagem: %%\n");
    ft_printf("Usando ft_printf: ");
    count1 = ft_printf("Testando %% -> Sinal de porcentagem: %%\n");
    printf("Contagem de caracteres impressos com printf: %d\n", count2);
    printf("Contagem de caracteres impressos com ft_printf: %d\n", count1);

    return 0;
}
