/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 17:21:01 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 19:16:59 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void print_content(void *content)
// {
//     printf("Content: %s\n", (char *)content);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	while (lst)
	{
		tmp = (lst)->next;
		f(lst->content);
		lst = tmp;
	}
}

// int main(void)
// {
// 	t_list *node1 = ft_lstnew("First");
// 	t_list *node2 = ft_lstnew("Second");
// 	t_list *node3 = ft_lstnew("Third");
// 	if (!node1 || !node2 || !node3)
// 		return 1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	ft_lstiter(node1, print_content);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// return 0;
// }
