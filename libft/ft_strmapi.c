/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 16:21:04 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 16:26:15 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *src);

// char	mytoupper(unsigned int q, char c)
// {
// 	int tmp;
// 	tmp = q;
// 	if ((c >= 'a') && (c <= 'z'))
// 		c -= 32;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

// int	main (void)
// {
// 	char *s = "Hallo ik ben 1 sTRING!	";
// 	printf("%s\n", ft_strmapi(s, mytoupper));
// }