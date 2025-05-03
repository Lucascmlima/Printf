/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:59:34 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/27 14:09:33 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	char	c;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		if (n <= -10)
			count += ft_putnbr(-(n / 10));
		c = '0' + -(n % 10);
		count += write(1, &c, 1);
	}
	else
	{
		if (n >= 10)
			count += ft_putnbr(n / 10);
		c = '0' + (n % 10);
		count += write(1, &c, 1);
	}
	return (count);
}
