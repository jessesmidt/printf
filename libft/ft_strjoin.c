/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 15:30:52 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/27 12:48:12 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*totlen;
	int		i;
	int		j;
	char	*t1;
	char	*t2;

	i = 0;
	j = 0;
	t1 = (char *)s1;
	t2 = (char *)s2;
	totlen = malloc((ft_strlen(t1) + ft_strlen (t2) * sizeof(char) + 1));
	if (!totlen)
		return (NULL);
	while (t1[i])
		totlen[j++] = t1[i++];
	i = 0;
	while (t2[i])
		totlen[j++] = t2[i++];
	totlen[j] = '\0';
	return (totlen);
}

// int main(void)
// {
// 	char *s1 = "This is a te";
// 	char *s2 = "st sting!";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }