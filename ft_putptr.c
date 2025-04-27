/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:17:51 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/27 17:17:52 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putptr(void *ptr)
{
	unsigned long long	addr;
	int					count;

	count = 0;
	addr = (unsigned long long)ptr;
	count += ft_putstr("0x");
	if (addr == 0)
		count += ft_putchar('0');
	else
		count += ft_putnbr_hex(addr, 0);
	return (count);
}
