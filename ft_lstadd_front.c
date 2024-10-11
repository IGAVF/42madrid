/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:24:00 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:18:46 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
////add a new node at the beggining of linked list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("Contenido: %s\n", (char *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int main(void)
{
    t_list *lista = NULL;
    t_list *nuevo_nodo;

    // Crete and add nodos
    nuevo_nodo = ft_lstnew("Tercero");
    ft_lstadd_front(&lista, nuevo_nodo);
    
    nuevo_nodo = ft_lstnew("Segundo");
    ft_lstadd_front(&lista, nuevo_nodo);
    
    nuevo_nodo = ft_lstnew("Primero");
    ft_lstadd_front(&lista, nuevo_nodo);

    //print list
    printf("Lista después de añadir nodos:\n");
    print_list(lista);

    //free memory
    while (lista)
    {
        t_list *temp = lista;
        lista = lista->next;
        free(temp);
    }

    return (0);
}
*/