/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:48:50 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 17:36:43 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i <= len))
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little [j] && little[j] != '\0')
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "haystack";
// 	char	sfind[] = "abcd";
// 	printf("%p\n", ft_strnstr(s1, sfind, 9));
// 	printf("%p\n", strnstr(s1, sfind, 9));
// 	return (0);
// }