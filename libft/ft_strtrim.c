/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 17:49:16 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/27 12:55:51 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

static int	trim(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*res(const char *s1, int start, int len)
{
	int		i;
	char	*nstr;

	i = 0;
	if (len <= 0 || (size_t)start >= ft_strlen(s1))
		return (ft_strdup(""));
	nstr = ft_calloc(len + 1, sizeof(char));
	if (!nstr)
		return (NULL);
	while (i < len)
	{
		nstr[i] = s1[start + i];
		i++;
	}
	return (nstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	if (s1 == NULL || ft_strlen((char *)s1) == 0)
		return (ft_strdup(""));
	while (trim(s1[i], set))
		i++;
	while (trim(s1[j], set))
		j--;
	return (res(s1, i, j - (i - 1)));
}

// int	main(void)
// {
// 	char *s1 = "!!Hello there!!";
// 	char *set = "!eH;
// 	printf("%s \n", ft_strtrim(s1, set));
// }
