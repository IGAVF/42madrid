/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:16:32 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:35:29 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//defines whether a character is printable in ascii.
int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int c;

	c = 'P';
	printf ("%i\n", ft_isprint(c));
	return (0);	
}
*/