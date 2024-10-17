/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:28 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:36:12 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*-The memcmp() function compares the first n bytes of the memory areas
s1 and s2.
-returns an integer less than, equal to, or greater than zero*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*
int main()
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	size_t len1 = strlen(str1);

	printf("Test 1 (identical strings):\n");
    printf("ft_memcmp result: %d\n", ft_memcmp(str1, str2, len1));
    printf("memcmp result: %d\n\n", memcmp(str1, str2, len1));
	return (0);
}*/
