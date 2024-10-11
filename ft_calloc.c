/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:59:16 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:22:41 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
//used for dynamic memory allocation.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*bite_ptr;
	size_t	total_size;
	size_t	i;

	total_size = (nmemb * size);
	ptr = malloc (total_size);
	if (!ptr)
		return (NULL);
	bite_ptr = (char *)ptr;
	i = 0;
	while (i <= total_size)
	{
		bite_ptr[i] = 0;
		i++;
	}
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