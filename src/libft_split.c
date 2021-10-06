/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:17:26 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 15:39:09 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	word_len(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		a++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (a);
}

int	word_size(char *str, int i)
{
	int	a;

	a = 0;
	while (str[i] && str[i] == ' ')
		i = i + 1;
	while (str[i] && str[i] != ' ')
	{
		i += 1;
		a++;
	}
	return (a);
}

void	cpy_words_next(int *b, char *str, int *a, char ***tab)
{
	int		c;

	while (str[*a] && str[*a] == ' ')
		*a = *a + 1;
	c = 0;
	while (str[*a] && str[*a] != ' ')
	{
		(*tab)[*b][c] = str[*a];
		*a = *a + 1;
		c++;
	}
	(*tab)[*b][c] = '\0';
	*b = *b + 1;
}

char	**cpy_words(char *str, int i)
{
	int		a;
	int		b;
	int		s;
	char	**tab;

	a = 0;
	b = 0;
	s = 0;
	tab = (char **)malloc(sizeof(char *) * (i + 1));
	if (tab == NULL)
		return (NULL);
	tab[i] = NULL;
	while (str[a])
	{
		s = word_size(str, a);
		tab[b] = (char *)malloc(sizeof(char) * (s + 1));
		if (tab[b] == NULL)
			return (NULL);
		cpy_words_next(&b, str, &a, &tab);
	}
	return (tab);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		a++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	i = word_len(str);
	tab = cpy_words(str, i);
	return (tab);
}
