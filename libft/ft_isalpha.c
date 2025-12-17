/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 13:56:33 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/10 17:21:50 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int c;
// 	c = 'c';
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(c));
// }