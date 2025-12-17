/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 15:01:04 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/14 13:25:51 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char c;
// 	c = '-';
// 	printf("%d\n", ft_isalnum(c));
// 	printf("%d\n", isalnum(c));
// }