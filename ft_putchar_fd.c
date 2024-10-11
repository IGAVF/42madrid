/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:21:41 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/07 13:50:34 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//write character c on a specified file descriptor
/* first parameter is the file descriptor
second parameter is the address to the character*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main(void)
{
    ft_putchar_fd('H', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('a', 1);
    ft_putchar_fd('\n', 1);
    return (0);
}*/