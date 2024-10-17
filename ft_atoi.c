/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:12:08 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/16 12:33:50 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//convert a string representation of an integer
//to its corresponding integer value.
//It does not provide any way to detect conversion errors.
//It cannot handle very large numbers that do not fit into an int.
int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*int main() {
	const char *str1 = "123,45";
	const char *str2 = "  -678";
	const char *str3 = "abc123";

	int num1 = atoi(str1);
	int num2 = atoi(str2);
	int num3 = atoi(str3);

	printf("str1 converted: %d\n", num1);
	printf("str2 converted: %d\n", num2);
	printf("str3 converted: %d\n", num3);

	return 0;
}*/