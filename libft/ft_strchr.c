/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 15:52:24 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 17:49:31 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (1)
	{
		if (s[i] == uc)
			return ((char *)s + i);
		if (s[i] == '\0')
			return (0);
		i++;
	}
}

// int main(void)
// {
// 	char *s;
// 	char c;
// 	s = "";
// 	c = 't' + 256;
// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s\n", strchr(s, c));
// }