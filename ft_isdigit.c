/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:56:48 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:24:39 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int x)
{
	if (x >= 0 && x <= 9)
		return (1);
	return (0);
}
/*
//Checks if a character is a decimal digit.
int	main(void)
{
	int	a;

	a = '0';
	printf("%d,\n", ft_isdigit(a));
	return (0);
}
*/
