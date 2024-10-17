/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:23:59 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:34:15 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122)
		|| (x >= '0' && x <= '9'))
		return (1);
	return (0);
}

/*
//Indicates whether a character is an alphabetical letter
or a decimal digit
int	main(void)
{
	int	a;

	a = '?';
	printf("%d\n", ft_isalnum(a));
}
*/