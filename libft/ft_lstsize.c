/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 13:43:19 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/22 15:44:38 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main (void)
// {
//     t_list *node1 = ft_lstnew("third");
//     t_list *node2 = ft_lstnew("second");
// 	t_list *node3 = ft_lstnew("first");
//     t_list *head = node1;
// 	node1->next = node2;
// 	node2->next = node3;
// 	printf("%d", ft_lstsize(head));
// }