/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:41:53 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/07 11:59:58 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char ))
{
	char				*result;
	unsigned int		i;
	size_t				size;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	result = malloc(sizeof (char) * size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*char my_func(unsigned int i, char c)
     {
        (void)i;
         return (c - 32);
     }

     int main()
     {
         char *str = "hello";
         char *result = ft_strmapi(str, &my_func);
         printf("%s\n", result);  // Imprime: "Hfnos"
         free(result);
         return (0);
     }*/
