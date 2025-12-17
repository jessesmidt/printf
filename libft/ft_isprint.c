/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 14:31:23 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 15:47:48 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}
// int main(void)
// {
// 	char c = 66;
// 	printf("%d\n", ft_isprint(c));
// 	printf("%d\n", isprint(c));
// }
