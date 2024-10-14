/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:02:01 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/14 16:03:30 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*void *add_one(void *content)
{
    int *num = (int *)content;
    *num += 1;
    return num;
}

void print_int(void *content)
{
    printf("%d ", *(int *)content);
}

int main(void)
{
    t_list *lst = NULL;
    int nums[] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++)
        ft_lstadd_back(&lst, ft_lstnew(&nums[i]));

    printf("Original list: ");
    ft_lstiter(lst, print_int);
    printf("\n");

    t_list *new_lst = ft_lstmap(lst, add_one, NULL);

    printf("New list: ");
    ft_lstiter(new_lst, print_int);
    printf("\n");

    ft_lstclear(&lst, NULL);
    ft_lstclear(&new_lst, NULL);

    return 0;
}*/