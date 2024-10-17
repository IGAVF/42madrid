/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:16:24 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:27:36 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//same as the first in the series + line break.
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*int	main()
{
	ft_putendl_fd("hola mundo", 1);
	return (0);
}*/
