/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 14:43:16 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 13:05:26 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

// int main(void)
// {
//     t_list *node1 = ft_lstnew("first");
//     t_list *node2 = ft_lstnew("second");
//     t_list *head = node1;

//     ft_lstadd_back(&head, node2);
//     printf("Head content: %s\n", (char *)head->content);
//     printf("content 2: %s\n", (char *)head->next->content);
//     free(node1);
//     free(node2);

//     return 0;
// }