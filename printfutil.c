/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printfutil.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/27 13:59:19 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/31 13:36:34 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		i += ft_putstr("(null)");
	else
	{
		while (s[i])
		{
			write (1, &s[i], 1);
			i++;
		}
	}
	return (i);
}

int	ft_putpercent(void)
{
	char	c;

	c = '%';
	write(1, &c, 1);
	return (1);
}

int	ft_print_nbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_strlen(num);
	ft_putstr(num);
	free(num);
	return (len);
}
