/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printu.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/29 18:13:47 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/31 13:38:00 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ilen(unsigned long n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*ft_uitoa(size_t n)
{
	unsigned int	m;
	char			*res;
	int				i;

	m = n;
	i = ilen(m);
	res = malloc((i * sizeof(char) + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	while (i)
	{
		res[--i] = (m % 10) + '0';
		m = m / 10;
	}
	return (res);
}

int	ft_print_unbr(size_t n)
{
	int		len;
	char	*num;

	num = ft_uitoa(n);
	len = ft_strlen(num);
	ft_putstr(num);
	free(num);
	return (len);
}
