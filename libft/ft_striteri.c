/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 17:33:16 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/21 18:41:06 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

// void	test(unsigned int q, char *c)
// {
// 	if (q % 2)
// 		*c = '@';
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char s[] = "Hallo ik ben 1 sTRING!	";
// 	ft_striteri(s, test);
// 	printf("%s\n", s);
// }
