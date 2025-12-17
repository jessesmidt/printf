/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 14:29:33 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 13:05:04 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n);

static	int	checkmalloc(char **arr, int pos, size_t buf)
{
	int	i;

	i = 0;
	arr[pos] = malloc(buf);
	if (arr[pos] == NULL)
	{
		while (i < pos)
			free(arr[i++]);
		free(arr);
		return (1);
	}
	return (0);
}

static	int	countwords(char const *s, char c)
{
	int	count;
	int	inword;
	int	i;

	count = 0;
	inword = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && (inword == 0))
		{
			inword = 1;
			count ++;
		}
		else if (s[i] == c)
			inword = 0;
		i++;
	}
	return (count);
}

static	int	fill(char **arr, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (*s)
	{
		j = 0;
		while ((*s == c) && *s)
			s++;
		while ((*s != c) && *s)
		{
			j++;
			s++;
		}
		if (j)
		{
			if (checkmalloc(arr, i, j + 1))
				return (1);
			ft_strlcpy(arr[i], s - j, j + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wordcount;

	if (s == NULL)
		return (NULL);
	wordcount = countwords(s, c);
	arr = malloc((wordcount + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[wordcount] = NULL;
	if (fill(arr, s, c))
		return (NULL);
	return (arr);
}

// int main(void)
// {
// 	int	i = 0;
// 	char *s = "test- en- die ding";
// 	char c = '-';
// 	char **res = ft_split(s, c);
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// }