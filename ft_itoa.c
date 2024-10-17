/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:42:57 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:35:38 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//converts an integer to a string.

static int	ft_countnumb(long n)
{
	int	cont;

	cont = 1;
	if (n < 0)
	{
		n = -n;
		cont++;
	}
	while (n >= 10)
	{
		n /= 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	long	num;

	num = n;
	size = ft_countnumb(num);
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (size > (n < 0))
	{
		size--;
		result[size] = (num % 10) + '0';
		num /= 10;
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
