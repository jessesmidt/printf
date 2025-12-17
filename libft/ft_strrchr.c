/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 17:59:11 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/27 12:48:33 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = ft_strlen((char *)s);
	uc = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == uc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s;
// 	char c;
// 	s = "Dit is een test";
// 	c = 'e';
// 	printf("%p\n", ft_strrchr(s, c));
// 	printf("%p\n", strrchr(s, c));
// }