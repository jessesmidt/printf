/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:36:19 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 16:19:37 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		res;
	char	*s1tmp;
	char	*s2tmp;

	s1tmp = (char *)s1;
	s2tmp = (char *)s2;
	res = 0;
	i = 0;
	while (i < n)
	{
		if (s1tmp[i] == s2tmp[i])
			i++;
		else
		{
			res = (unsigned char)s1tmp[i] - (unsigned char)s2tmp[i];
			return (res);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "t\0" ;
// 	char s2[] = "t\200" ;

// 	printf("%d\n", ft_memcmp(s1, s2, 2));
// 	printf("%d\n", memcmp(s1, s2, 2));
// 	return (0); 
// }