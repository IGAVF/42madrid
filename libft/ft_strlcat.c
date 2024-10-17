/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:48:29 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:37:10 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//adds the string src to the end of dst.
//will add at most size - strlen(dst) - 1 characters.
/*Unlike strncat(), size is the full size 
of the destination buffer, not the remaining space.*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	j;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	j = dst_len;
	i = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[i] && dst_len + i < size -1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
/*
int main(void)
{
    char dest[20] = "Hello, ";
    const char *src = "World!";
    size_t result;

    printf("Antes de ft_strlcat:\n");
    printf("dest = \"%s\"\n", dest);
    printf("src = \"%s\"\n", src);

    result = ft_strlcat(dest, src, sizeof(dest));

    printf("\nDespués de ft_strlcat:\n");
    printf("dest = \"%s\"\n", dest);
    printf("Valor retornado = %zu\n", result);
    printf("Longitud de dest = %zu\n", strlen(dest));

    return (0);
}*/
