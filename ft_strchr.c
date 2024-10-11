/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:35:57 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:29:04 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
//first occurrence of a character in a string
//in parentheses we convert the type from int to char of c
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || !c)
		return ((char *)s);
	return (NULL);
}
/*
int	main()
{
	const char *str = "42MADRID";
	int c = 'D';

	printf("%td\n", ft_strchr( str,c) -str);
	printf("%s\n", ft_strchr( str,c));

	return (0);
}
*/
//%td format for differences between pointers.