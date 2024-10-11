/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:26:01 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/03 14:43:06 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_toupper(unsigned int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (0);
}

/*int main()
{
	char c;

	c = 'm';
	printf("%c -> %c", c, ft_toupper(c));
}*/
