/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/24 16:45:28 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/12/01 18:29:20 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static	int	ft_format(va_list args, const char format)
{
	int	plen;

	plen = 0;
	if (format == 'c')
		plen += ft_putchar(va_arg(args, int));
	else if (format == 's')
		plen += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		plen += ft_print_ptr(va_arg(args, void *));
	else if (format == 'i' || format == 'd')
		plen += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		plen += ft_print_unbr(va_arg(args, int));
	else if (format == 'x')
		plen += ft_print_hexl(va_arg(args, int));
	else if (format == 'X')
		plen += ft_print_hexu(va_arg(args, int));
	else if (format == '%')
		plen += ft_putpercent();
	return (plen);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		plen;

	va_start(args, str);
	i = 0;
	plen = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!str[i + 1] || ft_strchr("cspiduxX%%", str[i + 1]) == 0)
				return (-1);
			plen += ft_format(args, str[i + 1]);
			i++;
		}
		else
			plen += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (plen);
}

int main(void)
{
	char *ptr;
	int plen = ft_printf("string %r testest", ptr);
	ft_printf ("%i", plen);
}