/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 15:25:43 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 16:42:21 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	while (i < (nmemb * size))
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	int members = 2;
// 	int *test = calloc(members, sizeof(int) * 5);
// 	// for (int i = 0; i < 5; i++)
// 	// {
// 	// 	printf("%d", test[i]);
// 	// }
// 	printf("%p\n", (int *)ft_calloc(members, sizeof(int) *5));
// 	printf("%p\n", (int *)calloc(members, sizeof(int) *5 ));
// }