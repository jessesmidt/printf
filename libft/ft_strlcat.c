/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:28:06 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 18:21:12 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;
	size_t	fill;

	i = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	fill = n - destlen - 1;
	if (n == 0)
		return (srclen);
	if (n <= destlen)
		return (srclen + n);
	while (src[i] && fill--)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (srclen + destlen);
}

// int	main(void)
// {
// 	char	dest[25] = "12";
// 	const char	src[15] = "42197421";
// 	printf("jesse: %zu\n", ft_strlcat(dest, src, 3));
// 	printf("clanker: %zu\n", strlcat(dest, src, 3));
// }