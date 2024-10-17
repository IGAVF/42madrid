/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:59:45 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:37:21 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*--Copy a string from src to dst, ensuring that the
destination buffer is always null-terminated.
--Prevent buffer overflows by truncating the source string
if it is too long to fit in the destination buffer*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
int main()
{
	char src[] = "¡Hola, mundo!";
	char dst[10];
	size_t resultado;

	resultado = ft_strlcpy(dst, src, sizeof(dst));

	printf("Cadena copiada: %s\n", dst);
	printf("strlcpy devolvió: %zu\n", resultado);
	printf("La truncación %s\n", (resultado >= sizeof(dst)) 
	? "ocurrió" : "no ocurrió");

	return (0);
}*/