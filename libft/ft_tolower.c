/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 15:48:34 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/09 17:52:31 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

// int main(void)
// {
// 	printf("%c\n", ft_tolower('D'));
// 	printf("%c\n", ft_tolower('X'));
// 	printf("%c\n", ft_tolower('B'));
// 	printf("%c\n", ft_tolower('d'));
// 	printf("%c\n", ft_tolower('&'));
// 	printf("%c\n", ft_tolower('0'));
// 	printf("%c\n", tolower('D'));
// }
