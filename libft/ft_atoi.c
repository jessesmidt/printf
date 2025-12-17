/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 13:24:05 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/13 15:07:39 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
// #include "libft.h"

int	ft_atoi(char *nptr)
{
	int	i;
	int	nbr;
	int	count;
	int	min;

	i = 0;
	nbr = 0;
	count = 0;
	min = 0;
	while ((nptr[i] == ' ') || ((nptr[i] >= 9) && (nptr[i] <= 13)))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		count++;
		if (nptr[i] == '-')
			min++;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
		nbr = nbr * 10 + (nptr[i++] - '0');
	if ((min == 1) && (count <= 1))
		return (nbr * -1);
	else
		return (nbr);
}

// int main(void)
// {
// 	char *string = " \n	-187331";
// 	printf("%d\n", ft_atoi(string));
// 	printf("%d\n", atoi(string));
// }