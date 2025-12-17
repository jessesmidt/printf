/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 14:42:49 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/09 14:40:17 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*buf;
	int		i;

	i = 0;
	buf = s;
	while (n--)
	{
		*(unsigned char *)buf = (unsigned char)c;
		buf++;
	}
	return (s);
}

// int main(void)
// {
// 	char s[10] = "1234567890";
// 	printf("%s\n", (unsigned char *)ft_memset(s, 'a', 3));
// 	printf("%s\n", (unsigned char *)memset(s, 'a', 3));
// }