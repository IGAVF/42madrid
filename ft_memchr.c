/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:56:49 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/11 15:38:28 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
/*Locate the first occurrence of c (converted to an
unsigned char) in the string */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*p == uc)
			return (p);
		p++;
	}
	return (NULL);
}

/*
int main()
{
    char str[] = "Azucar";
    char *result;

    // Buscar 'a' en toda la cadena
    result = ft_memchr(str, 'a', strlen(str));
    if (result)
        printf("'a' encontrada en posición: %ld\n", result - str);
    else
        printf("'a' no encontrada\n");

    // Buscar 'z' en toda la cadena
    result = ft_memchr(str, 'z', strlen(str));
    if (result)
        printf("'z' encontrada en posición: %ld\n", result - str);
    else
        printf("'z' no encontrada\n");

    // Buscar '!' solo en los primeros 5 caracteres
    result = ft_memchr(str, '!', 5);
    if (result)
        printf("'!' encontrada en posición: %ld\n", result - str);
    else
        printf("'!' no encontrada en los primeros 5 caracteres\n");

    return 0;
}*/