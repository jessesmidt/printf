/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 15:53:38 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 14:36:44 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char c = 256;
// 	printf("%d\n", ft_isascii(c));
// 	printf("%d\n", isascii(c));
// }
