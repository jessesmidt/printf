/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 14:03:04 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 14:18:16 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (0);
	while (lst->next)
		lst = lst->next;
	last = lst;
	return (last);
}

// int	main (void)
// {
//     t_list *node1 = ft_lstnew("third");
//     t_list *node2 = ft_lstnew("second");
// 	t_list *node3 = ft_lstnew("first");
//     t_list *head = node1;
// 	head->next = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("%p", ft_lstlast(head));
// }