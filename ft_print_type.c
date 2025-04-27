/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:40:24 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/27 17:18:08 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_type(va_list args, char type)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(args, int)); // Para 'char' usa-se 'int' no va_arg
	else if (type == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	else if (type == 'x')
		count += ft_putnbr_hex(va_arg(args, unsigned int), 0);
	else if (type == 'X')
		count += ft_putnbr_hex(va_arg(args, unsigned int), 1);
	else if (type == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (type == '%')
		count += ft_putchar('%');
	return (count);
}

