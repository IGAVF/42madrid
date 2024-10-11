/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:46:40 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:43 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// This function applies a given function 
//to each element of a linked list.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content)
{
    printf("%d ", *(int *)content);
}

int main(void)
{
    t_list *list = NULL;
    int a = 1, b = 2, c = 3, d = 4;

    // Create a list
    ft_lstadd_back(&list, ft_lstnew(&a));
    ft_lstadd_back(&list, ft_lstnew(&b));
    ft_lstadd_back(&list, ft_lstnew(&c));
    ft_lstadd_back(&list, ft_lstnew(&d));

    printf("List contents: ");
    ft_lstiter(list, print_content);
    printf("\n");

    // Don't forget to free the list when you're done
    ft_lstclear(&list, NULL);

    return 0;
}
*/
