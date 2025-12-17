/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 13:10:18 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/13 18:12:01 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*cdest;
	char	*csrc;

	csrc = (char *)src;
	cdest = (char *)dest;
	if ((dest == 0) && (src == 0))
		return (0);
	if (dest <= src)
	{
		while (count--)
			*cdest++ = *csrc++;
	}
	else if (dest > src)
	{
		cdest += count - 1;
		csrc += count - 1;
		while (count--)
			*cdest-- = *csrc--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[25] = "52937345876";
// 	printf("%s\n", (unsigned char *)ft_memmove(dest+2, dest, 5));
// 	char	dest2[25] = "52937345876";
// 	printf("%s\n", (unsigned char *)memmove(dest2+2, dest2, 5));
// }