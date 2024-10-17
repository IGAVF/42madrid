/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:25:29 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:38:29 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Locates a substring in a string, with length limit.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && i + j < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*haystack = "Hola mundo, este es un ejemplo";
	const char	*needle1 = "mundo";
	const char	*needle2 = "ejemplo";
	const char	*needle3 = "no existe";
	size_t		len = strlen(haystack);

	char	*result1 = ft_strnstr(haystack, needle1, len);
	char	*result2 = ft_strnstr(haystack, needle2, len);
	char	*result3 = ft_strnstr(haystack, needle3, len);

	printf("Buscando '%s': %s\n", needle1, result1 ? result1 : "No encontrado");
	printf("Buscando '%s': %s\n", needle2, result2 ? result2 : "No encontrado");
	printf("Buscando '%s': %s\n", needle3, result3 ? result3 : "No encontrado");

	return (0);
}*/