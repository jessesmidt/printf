/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 14:13:16 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/31 13:36:11 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static	int	ilen(long n)
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

char	*ft_itoa(int n)
{
	long	m;
	char	*res;
	int		i;
	int		neg;

	m = n;
	neg = 0;
	if (m < 0)
	{
		m = m * -1;
		neg = 1;
	}
	i = ilen(m) + neg;
	res = malloc((i * sizeof(char) + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	if (neg)
		res[0] = '-';
	while (i - neg)
	{
		res[--i] = (m % 10) + '0';
		m = m / 10;
	}
	return (res);
}

// int main(void)
// {
// 	int n = INT_MIN;
// 	printf("%s\n", ft_itoa(n));
// }