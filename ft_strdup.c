/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:50:18 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:29:18 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//used to duplicate character strings
char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (s[len])
		len++;
	dup = ((char *)malloc(sizeof(char) * (len + 1)));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int main()
{
    const char *original = "¡Hola, Mundo!";
    char *duplicado = strdup(original);
    
    if (duplicado == NULL)
	{
        fprintf(stderr, "La asignación de memoria falló\n");
        return (1);
    }
    
    printf("Original: %s\n", original);
    printf("Duplicado: %s\n", duplicado);
    
    // No olvides liberar la memoria asignada
    free(duplicado);
    
    return 0;
}*/
