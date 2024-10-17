/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:16:11 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:42:16 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//removes the specified characters
//in set from the beginning and end of the string.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}

/*
int main(void)
{
	char *str1 = "   Hello, World!   ";
	char *set1 = " ";
	char *result1 = ft_strtrim(str1, set1);

	char *str2 = "...Hello, World!...";
	char *set2 = ".";
	char *result2 = ft_strtrim(str2, set2);

	char *str3 = "abcHello, World!abc";
	char *set3 = "abc";
	char *result3 = ft_strtrim(str3, set3);

	printf("Original: '%s'\nTrimmed: '%s'\n\n", str1, result1);
	printf("Original: '%s'\nTrimmed: '%s'\n\n", str2, result2);
	printf("Original: '%s'\nTrimmed: '%s'\n\n", str3, result3);

	free(result1);
	free(result2);
	free(result3);

	return (0);
}*/