/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:17:51 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/05/06 20:57:00 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_putnbr_ptr(unsigned long n)
{
	char	*base;
	char	c;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_putnbr_ptr(n / 16);
	c = base[n % 16];
	count += write(1, &c, 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	n;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	n = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += ft_putnbr_ptr(n);
	return (count);
}
