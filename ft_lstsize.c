/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:40:18 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:48 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//to set the number of nodes in a linked list
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list	*list;
	int		a;
	int		b;
	int		c;
	int		size;

	list = NULL;
	a = 42;
	b = 21;
	c = 84;
	ft_lstadd_front(&list, ft_lstnew(&a));
	ft_lstadd_front(&list, ft_lstnew(&b));
	ft_lstadd_front(&list, ft_lstnew(&c));
	size = ft_lstsize(list);
	printf("List size: %d\n", size);
	ft_lstclear(&list, NULL);
	return (0);
}
*/