/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:53:15 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:49 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//find the last node of a linked list
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*last;
	int		a;
	int		b;
	int		c;

	list = NULL;
	a = 42;
	b = 21;
	c = 84;
	ft_lstadd_back(&list, ft_lstnew(&a));
	ft_lstadd_back(&list, ft_lstnew(&b));
	ft_lstadd_back(&list, ft_lstnew(&c));
	last = ft_lstlast(list);
	if (last)
		printf("Last element: %d\n", *(int *)(last->content));
	else
		printf("List is empty\n");
	ft_lstclear(&list, NULL);
	return (0);
}
*/