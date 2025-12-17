/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printhex.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/28 12:37:33 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/31 13:39:14 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ilen(unsigned int n)
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

static	char	*ft_itoahex(unsigned int n)
{
	unsigned int	m;
	char			*res;
	int				i;

	m = n;
	if (m < 0)
		return (0);
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

int	ft_print_hexl(unsigned int n)
{
	int		len;
	char	*str;

	str = ft_itoahex(n);
	len = ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (len);
}

int	ft_print_hexu(unsigned int n)
{
	int		len;
	char	*str;
	int		i;

	str = ft_itoahex(n);
	len = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	ft_putstr(str);
	free(str);
	return (len);
}
