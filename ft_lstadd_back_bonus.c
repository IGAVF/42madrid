/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:05:01 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:50 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//add a new node to the end of a linked list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
/*
static void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d ", *(int *)(list->content));
		list = list->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*list;
	int		a;
	int		b;
	int		c;

	list = NULL;
	a = 42;
	b = 21;
	c = 84;
	ft_lstadd_back(&list, ft_lstnew(&a));
	printf("After adding 42: ");
	print_list(list);
	ft_lstadd_back(&list, ft_lstnew(&b));
	printf("After adding 21: ");
	print_list(list);
	ft_lstadd_back(&list, ft_lstnew(&c));
	printf("After adding 84: ");
	print_list(list);
	ft_lstclear(&list, NULL);
	return (0);
}
}*/