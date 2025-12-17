/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 15:14:09 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 16:31:21 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

// void del(void *content)
// {
//     free(content);
//     printf("Content deleted.\n");
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main(void)
// {
//     t_list *node = malloc(sizeof(t_list));
//     if (!node)
//         return (1);
//     char *str = malloc(20 * sizeof(char));
//     if (!str)
//     {
//         free(node);
//         return (1);
//     }
//     snprintf(str, 20, "Hello, world!");
//     node->content = str;
//     node->next = NULL;
//     printf("Before deletion: %s\n", (char *)node->content);
//     ft_lstdelone(node, del);
//     return 0;
// }