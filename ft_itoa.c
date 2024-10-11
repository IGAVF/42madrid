/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:42:57 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:25:12 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//converts an integer to a string.
char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	int		i;

	i = 0;
	size = ft_countnumb(n);
	result = malloc(size * sizeof(char) + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		i = 1;
		result[0] = '-';
		n = n * -1;
	}
	result[size] = '\0';
	while (--size >= i)
	{
		result[size] = (n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
/*int main(int argc, char *argv[])
{
    (void)argc;
    int num = atoi(argv[1]);

    printf("%s\n",argv[1]);
    printf("el numero se escribe %s\n",ft_itoa(num));
    return 0;
}*/
