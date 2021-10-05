/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:17:26 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 23:06:32 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static	int	count_wd(char *str, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			nb++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (nb);
}

static	int	*word_mark(char *str, char c, int nb)
{
	int		i;
	int		a;
	int		*tab;

	i = 0;
	a = 0;
	tab = malloc(sizeof(int) * nb);
	if (tab == NULL)
		return (NULL);
	while (str[i] && (a < nb))
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
		if (str[i] != c)
		{
			tab[a++] = i;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (tab);
}

static	char	*malloc_word(char *str, char c)
{
	int		i;
	char	*word;

	i = 0;
	if (!str[0])
		return (NULL);
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	word[i] = '\0';
	ft_memmove(word, str, i);
	return (word);
}

static	char	**make_tab(char *str, char c, t_var *var)
{
	int		i;

	i = 0;
	while (i < var->sp_count)
	{
		var->sp_tab[i] = malloc_word(&str[var->sp_mark[i]], c);
		if (var->sp_tab[i] == NULL)
		{
			free(var->sp_mark);
			ft_free_tab(&(var->sp_tab));
			return (NULL);
		}
		i++;
	}
	free(var->sp_mark);
	return (var->sp_tab);
}

char			**ft_split(char const *s, char c, t_var *var)
{
	if (s)
	{
		var->sp_count = count_wd((char *)s, c);
		var->sp_tab = malloc(sizeof(char *) * (var->sp_count + 1));
		if (var->sp_tab == NULL)
			return (NULL);
		var->sp_tab[var->sp_count] = NULL;
		var->sp_mark = word_mark((char *)s, c, var->sp_count);
		if (var->sp_mark == NULL)
			return (NULL);
		make_tab((char *)s, c, var);
		return (var->sp_tab);
	}
	return (NULL);
}
