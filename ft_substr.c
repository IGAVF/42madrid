/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:23:05 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:38:43 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//extract a part of a string.

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = ((char *)malloc(sizeof(char) * (len +1)));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*int main(void)
{
    char *str = "Hello, World!";
    char *substr;

    substr = ft_substr(str, 7, 5);
    if (substr)
    {
        printf("Substring: %s\n", substr);
        free(substr);
    }
    else
    {
        printf("Substring creation failed.\n");
    }

    return 0;
}*/