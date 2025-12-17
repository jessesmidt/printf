/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 18:18:53 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 13:32:30 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while ((s1[i] || s2[i]) && n--)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			res = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (res);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "test\200" ;
// 	char s2[] = "test\0" ;

// 	printf("%d\n", ft_strncmp(s1, s2, 10));
// 	printf("%d\n", strncmp(s1, s2, 10));
// 	return (0); 
// }