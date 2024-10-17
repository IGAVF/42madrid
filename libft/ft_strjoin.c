/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:52:47 by iguillen          #+#    #+#             */
/*   Updated: 2024/09/30 14:14:27 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concatenate two strings into a new string.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}
/*int main()
{
char	*str1 = "Hola, ";
char	*str2 = "pepito!";
char	*result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("%s\n", result);  // Outputs: Hello, World!
		free(result);
	}
}*/