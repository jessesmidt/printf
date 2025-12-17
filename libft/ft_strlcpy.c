/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 15:03:28 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/21 12:40:58 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int		i;
	size_t	srclen;
	size_t	fill;

	i = 0;
	srclen = ft_strlen((char *)src);
	fill = n - 1;
	if (n == 0)
		return (srclen);
	while (src[i] && fill--)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

// int	main(void)
// {
// 	char	dest[15] = "1234567890";
// 	const char	src[15] = "abcdefghij";
// 	printf("jesse: %zu\n", ft_strlcpy(dest, src, 3));
// 	printf("clanker: %zu\n", strlcpy(dest, src, 3));
// }
