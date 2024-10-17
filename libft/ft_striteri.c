/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:07:26 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:29:35 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//returns nothing and works directly on the original string.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void to_upper_even(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = ft_toupper(*c);
}

int main()
{
    char str[] = "hello, world!";
    
    printf("Antes: %s\n", str);
    
    ft_striteri(str, &to_upper_even);
    
    printf("Después: %s\n", str);
    
    return 0;
}*/
