/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:16 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:34:08 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//used for dynamic memory allocation.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*int main()
{
	int *arr;
	int n = 5;

	// Asignar memoria para 5 enteros
	arr = (int *)ft_calloc(n, sizeof(int));

	if (arr == NULL) {
		printf("La asignación de memoria falló\n");
		return 1;
	}

	// Usar la memoria asignada
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);  // Imprimirá "0 0 0 0 0"
	}

	// Liberar la memoria asignada
	free(arr);

	return 0;
}*/