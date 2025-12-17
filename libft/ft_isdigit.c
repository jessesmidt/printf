/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 14:53:15 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/09 14:40:27 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	char c;
// 	c = '%';
// 	printf("%d\n", ft_isdigit(c));
// 	printf("%d\n", isdigit(c));
// }