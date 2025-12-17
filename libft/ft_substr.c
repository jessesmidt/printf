/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 17:46:46 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/27 12:56:51 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	rmndr;
	size_t	i;
	size_t	copy_len;

	if (((char *)s == 0) || ((size_t)start > ft_strlen((char *)s)))
		return (ft_strdup(""));
	rmndr = ft_strlen((char *)s) - start;
	if (rmndr < len)
		copy_len = rmndr;
	else
		copy_len = len;
	dest = malloc(copy_len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < (copy_len))
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char *str = "Hi, I am a string.";
// 	printf("%s\n", ft_substr(str, 400, 20));
// }