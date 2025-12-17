/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:04:49 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/13 18:12:25 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	c;

	c = 0;
	while (n--)
	{
		*(char *)s = (unsigned char)c;
		s++;
	}
}

// int main (void)
// {
// 	char s[10] = "1234567890";
// 	ft_bzero(s, 5);
// }
