/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 14:43:20 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/09 17:52:45 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

// int main(void)
// {
// 	printf("%c\n", ft_toupper('c'));
// 	printf("%c\n", ft_toupper('z'));
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('C'));
// 	printf("%c\n", ft_toupper('&'));
// 	printf("%c\n", ft_toupper('0'));
// printf("%c\n", toupper('c'));
// }
