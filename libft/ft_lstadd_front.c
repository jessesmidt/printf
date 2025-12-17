/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 13:17:44 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 14:46:36 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
//     t_list *node1 = ft_lstnew("third");
//     t_list *node2 = ft_lstnew("second");
// 	t_list *node3 = ft_lstnew("first");
//     t_list *head = node1;

//     ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node3);
//     printf("Head content: %s\n", (char *)head->content);
//     printf("content 2: %s\n", (char *)head->next->content);
// 	printf("content 3: %s\n", (char *)head->next->next->content);
//     free(node1);
//     free(node2);

//     return 0;
// }