/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:41:03 by iguillen          #+#    #+#             */
/*   Updated: 2024/09/19 12:47:28 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont])
		cont++;
	return (cont);
}
/*
int main(void)
{
	char *cadena1 = "Hola, mundo!";
	char *cadena2 = "";
	char *cadena3 = "1234567890";

	printf("longitud de '%s' : %zu\n", cadena1, ft_strlen(cadena1));
	printf("longitud de '%s' : %zu\n", cadena2, ft_strlen(cadena2));
	printf("longitud de '%s' : %zu\n", cadena3, ft_strlen(cadena3));

	return (0);
}*/
