/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:16:05 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:35:10 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= (97) && x <= (122)) || (x >= (65) && x <= (90)))
		return (1);
	return (0);
}
/*
//checks if a character is a letter,
int	main(void)
{
	int	a;

	a = 'e';
	printf("%d\n", ft_isalpha(a));
	return(0);
}
*/