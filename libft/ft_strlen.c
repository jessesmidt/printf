/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 14:34:24 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/27 12:43:47 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

// int main(void)
// {
// 	char *str;
// 	str = "1234567823423490-";
// 	printf("%d\n", ft_strlen(str));
// 	printf("%lu\n", strlen(str));
// }