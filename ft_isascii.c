/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:30:07 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:35:15 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
-The isascii() function checks if a given character,
in the current locale, can be represented as a 7-bit ascii character
-It is between 0 and 127 because it has the value of 7 bits,
then there is a duplicate that increases the value to include in ascii.
*/
#include "libft.h"

int	ft_isascii(int x)
{
	return (x >= 0 && x <= 127);
}

/*int main(void)
{
	int  c;

	c = 'E';
	printf ("%d\n", ft_isascii(c));
	return (0);
}*/

//x >= 0 && x <= 127