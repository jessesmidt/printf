/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jsmidt <jsmidt@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 18:28:31 by jsmidt        #+#    #+#                 */
/*   Updated: 2025/10/23 13:09:47 by jsmidt        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;

	new_list = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, tmp);
		lst = lst->next;
	}
	return (new_list);
}

// void *double_int(void *content)
// {
//     int *new_int = malloc(sizeof(int));
//     if (!new_int)
//         return NULL;
//     *new_int = (*(int *)content) * 2;
//     return new_int;
// }

// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *lst = NULL;
//     int values[] = {1, 2, 3};

//     for (int i = 0; i < 3; i++)
//     {
//         int *num = malloc(sizeof(int));
//         if (!num)
//             return 1;
//         *num = values[i];
//         t_list *node = ft_lstnew(num);
//         if (!node)
//         {
//             free(num);
//             ft_lstclear(&lst, del);
//             return 1;
//         }
//         ft_lstadd_back(&lst, node);
//     }
//     t_list *new_lst = ft_lstmap(lst, double_int, del);
//     t_list *tmp = new_lst;
//     while (tmp)
//     {
//         printf("%d ", *(int *)tmp->content);
//         tmp = tmp->next;
//     }
//     printf("\n");
//     ft_lstclear(&lst, del);
//     ft_lstclear(&new_lst, del);

//     return 0;
// }