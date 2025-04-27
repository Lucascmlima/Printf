#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);
int		ft_print_type(va_list args, char type);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
int		ft_putnbr_hex(unsigned int n, int uppercase);

#endif
