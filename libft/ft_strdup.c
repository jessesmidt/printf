/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/22 16:54:57 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/27 12:46:43 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0 ;
	while (*src)
	{
		*(dest + i++) = *src++ ;
	}
	*(dest + i) = '\0';
	return (dest);
}

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen((char *)src) + 1));
	if (!dest)
		return (0);
	return (ft_strcpy(dest, (char *) src));
}

// int	main(void)
// {
// 	char	*str1 = "tijd om te lunchen";
// 	printf("%p\n", ft_strdup(str1));
// 	printf("%p\n", strdup(str1));
// 	return (0);
// }
