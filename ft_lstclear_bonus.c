/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:34:11 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:42 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//delete and free the memory of a given linked list
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
	{
		return ;
	}
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
/*
// Helper function to print the content of a list
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

// Helper function to free the content of a list node
void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = NULL;
    char *str1 = strdup("Hello");
    char *str2 = strdup("World");
    char *str3 = strdup("!");

    // Create a list
    ft_lstadd_back(&list, ft_lstnew(str1));
    ft_lstadd_back(&list, ft_lstnew(str2));
    ft_lstadd_back(&list, ft_lstnew(str3));

    printf("Original list: ");
    print_list(list);

    // Clear the list
    ft_lstclear(&list, del_content);

    printf("After ft_lstclear: ");
    print_list(list);

    return (0);
}*/