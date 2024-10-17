/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:25:15 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:34:01 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//to set a block of memory to zero
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
/*
int	main(void)
{
	char	s[6] = "ARMADI";
	printf("Antes: %s\n", s);

	ft_bzero(s, sizeof(s));
	printf("Despues: %s\n", s);
	return(0);
} 
*/