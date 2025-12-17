/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:26:53 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 17:44:42 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*stmp;
	unsigned char	uc;

	stmp = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (stmp[i] == uc)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s;
// 	char c;
// 	s = "Dit is een test";
// 	c = 't';
// 	printf("%s\n", ft_memchr(s, 't' + 256, 17));
// 	printf("%s\n", memchr(s, 't' + 256, 17));
// }