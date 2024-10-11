/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguillen <iguillen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:47:57 by iguillen          #+#    #+#             */
/*   Updated: 2024/10/09 16:28:31 by iguillen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//static size_t counts the number of substrings in s that
//are separated by the character c
static size_t	ft_countsubstr(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_freelst(char **lst, int i)
{
	while (i >= 0)
		free(lst[i--]);
	free (lst);
}

static char	**ft_wordsplit(char **lst, char const *s, char c, int i)
{
	size_t	wlen;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				wlen = ft_strlen(s);
			else
				wlen = ft_strchr(s, c) - s;
			lst[i] = ft_substr(s, 0, wlen);
			if (lst[i] == NULL)
			{
				ft_freelst(lst, i - 1);
				return (NULL);
			}
			s += wlen;
			i++;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	lst = malloc((ft_countsubstr(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	lst = ft_wordsplit(lst, s, c, 0);
	if (!lst)
		return (NULL);
	else
		return (lst);
}

/*int	main(void)
{
	char const	*s = "porfaquiereme";
	char		c = 'a';
	char		**result = ft_split(s, c);
	int			i = 0;

	if (result == NULL)
	{
		printf("NULL\n");
		return (1);
	}

	printf("original %s\n", s);
	printf("delimitador %c\n", c);
	printf("resultado \n");
	while (result[i] != NULL)
	{
		printf("[%d]: %s\n", i, result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
// devuelve porf quiereme separados por salto de linea*/