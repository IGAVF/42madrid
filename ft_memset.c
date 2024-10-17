/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:07:11 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:36:42 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	valor;

	valor = ((unsigned char)c);
	p = s;
	while (n--)
	{
		*p++ = valor;
	}
	return (s);
}
/*int main(void)
{
    char str[50] = "AGUACATE";
    ft_memset(str, '_', 49);
    str[49] = '\0';
    printf("Resultado: %s\n", str);
    return 0;
}*/
