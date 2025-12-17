/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:24:56 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 16:46:22 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	int		i;

	if (!dst && !src)
		return (0);
	if (n == 0 || (dst == src))
		return (dst);
	cdest = (char *)src;
	csrc = (char *)dst;
	i = 0;
	while (n--)
	{
		csrc[i] = cdest[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
// 	char dest[10] = "NULL";
// 	char src[5] = "NULL";
// 	printf("%s\n", (unsigned char *)ft_memcpy(dest, src, 1));
// 	printf("%s\n", (unsigned char *)memcpy(dest, src, 1));
// }