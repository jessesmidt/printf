/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printptr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/27 15:56:01 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/31 13:38:10 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ilen(unsigned long long n)
{
	int	i;

	i = 1;
	while (n / 16)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static	char	*ptr_itoahex(unsigned long long n)
{
	unsigned long long	m;
	char				*res;
	int					i;

	m = n;
	i = ilen(m);
	res = malloc((i * sizeof(char) + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	while (i)
	{
		if ((m % 16) < 10)
			res[--i] = (m % 16) + '0';
		if ((m % 16) >= 10)
			res[--i] = (m % 16) + 'W';
		m = m / 16;
	}
	return (res);
}

static	int	ptr_print_hexl(unsigned long long n)
{
	int		len;
	char	*str;

	str = ptr_itoahex(n);
	len = ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (len);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long long	address;
	int					count;

	if (!ptr)
		return (ft_putstr("(nil)"));
	count = 0;
	address = (unsigned long long)ptr;
	count += ft_putstr("0x");
	count += ptr_print_hexl(address);
	return (count);
}
