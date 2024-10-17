/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:36:36 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:36:27 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The memcpy() function copies n bytes from the src 
memory area to the dst memory area.*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
int main()
{
	char src1[] = "Hola, mundo!";
	char dst1[20];
	
	ft_memcpy(dst1, src1, strlen(src1) + 1);// +1 para incluir el carácter nulo
	printf("Original: %s\nCopia: %s\n\n", src1, dst1);
	return (0);
}*/