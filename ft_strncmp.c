/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:27:25 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/14 16:04:32 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
//compare two strings and return =,<,>.
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int main() {
    const char *str1 = "Hola";
    const char *str2 = "HOla Mundo";
    
    int resultado = strncmp(str1, str2, 2);
    
    if (resultado == 0) {
        printf("Los primeros 4 caracteres son iguales.\n");
    } else if (resultado < 0) {
        printf("str1 es menor que str2 en los primeros 4 caracteres.\n");
    } else {
        printf("str1 es mayor que str2 en los primeros 4 caracteres.\n");
    }
    
    return 0;
}*/
