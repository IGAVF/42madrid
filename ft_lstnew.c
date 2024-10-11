/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:08:12 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:41 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//creates a new node for a linked list.
t_list	*ft_lstnew(void *content)
{
	t_list	*nuevo_nodo;

	nuevo_nodo = (t_list *) malloc(sizeof(t_list));
	if (!nuevo_nodo)
		return (NULL);
	nuevo_nodo->content = content;
	nuevo_nodo->next = NULL;
	return (nuevo_nodo);
}
/*void print_list(t_list *lst)
{
    while (lst)
    {
        printf("Contenido: %s\n", (char *)lst->content);
        lst = lst->next;
    }
}
int main(void)
{
    t_list *nodo1;
    t_list *nodo2;
    t_list *nodo3;

    // Create new nodos
    nodo1 = ft_lstnew("Hola");
    nodo2 = ft_lstnew("Mundo");
    nodo3 = ft_lstnew("!");

    // Conect nodos
    nodo1->next = nodo2;
    nodo2->next = nodo3;

    // print list
    printf("Lista completa:\n");
    print_list(nodo1);

    // clean memory
    free(nodo1);
    free(nodo2);
    free(nodo3);

    return (0);
}*/