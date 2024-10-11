/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:57:39 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:27:05 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
//The memmove() function copies n bytes from memory area src
//to memory area dest.
//Memory areas may overlap.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}
/*int main()
{
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    // Mover 'World!' cinco posiciones a la izquierda
    memmove(str + 7, str + 12, 6);
    printf("After memmove:   %s\n", str);

    // Ejemplo con superposición
    char overlap[] = "abcdefghijklmnopqrstuvwxyz";
    printf("\nOriginal overlap string: %s\n", overlap);

    // Mover los últimos 10 caracteres 5 posiciones a la izquierda
    memmove(overlap + 11, overlap + 16, 10);
    printf("After overlapping memmove: %s\n", overlap);

    return 0;
}*/
