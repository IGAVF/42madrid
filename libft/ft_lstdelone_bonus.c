/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:29:42 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:47 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//remove a single node from a linked list and free its memory.
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("Content: %s\n", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

t_list	*create_test_list(void)
{
	t_list	*list;

	list = ft_lstnew(strdup("One"));
	ft_lstadd_back(&list, ft_lstnew(strdup("Two")));
	ft_lstadd_back(&list, ft_lstnew(strdup("Three")));
	ft_lstadd_back(&list, ft_lstnew(strdup("Four")));
	return (list);
}

void	remove_node(t_list **list, t_list *node_to_remove)
{
	t_list	*current;

	if (!list || !*list || !node_to_remove)
		return ;
	if (*list == node_to_remove)
	{
		*list = node_to_remove->next;
		ft_lstdelone(node_to_remove, del);
		return ;
	}
	current = *list;
	while (current->next)
	{
		if (current->next == node_to_remove)
		{
			current->next = node_to_remove->next;
			ft_lstdelone(node_to_remove, del);
			return ;
		}
		current = current->next;
	}
}

void	clean_list(t_list **list)
{
	t_list	*temp;

	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		ft_lstdelone(temp, del);
	}
}

int	main(void)
{
	t_list	*list;
	t_list	*node_to_delete;

	list = create_test_list();
	node_to_delete = list->next->next;
	printf("Original list:\n");
	print_list(list);
	remove_node(&list, node_to_delete);
	printf("List after deleting the 'Three' node:\n");
	print_list(list);
	clean_list(&list);
	return (0);
}
*/
