/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 15:45:49 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 17:20:39 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *content)
// {
//     free(content);
//     printf("Content deleted.\n");
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

// int main(void)
// {
//     t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
//     if (!node1 || !node2)
//         return (1);
//     char *str1 = malloc(20 * sizeof(char));
// 	char *str2 = malloc(20 * sizeof(char));
//     if (!str1 || !str2)
//     {
//         free(node1 && node2);
//         return (1);
//     }
//     snprintf(str1, 20, "Hello, world!");
// 	snprintf(str2, 20, "Hello again, world!");
//     node1->content = str1;
//     node1->next = node2;
// 	node2->content = str2;
//     node2->next = NULL;
//     printf("Before deletion 1: %s\n", (char *)node1->content);
// 	printf("Before deletion 2: %s\n", (char *)node2->content);
//     ft_lstclear(&node1, del);
//     return 0;
// }