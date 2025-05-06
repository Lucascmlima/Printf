/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:55:04 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/05/06 20:55:18 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putnbr_hex(unsigned int n, int uppercase);
int	ft_print_type(va_list args, char type);
int	ft_printf(const char *format, ...);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int n);

#endif
