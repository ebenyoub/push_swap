/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:42:51 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 11:57:06 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

bool	is_in_chunk(int nb, int c, t_var *var)
{
	int		i;
	int		size;

	i = 0;
	if (c >= var->part - 1)
		size = var->last_chunk_size;
	else
		size = var->chunk_len;
	while (var->chunk_tabs[c] && i < size)
	{
		if (nb == var->chunk_tabs[c][i])
			return (true);
		i++;
	}
	return (false);
}

int	find_top(int c, t_var *var)
{
	t_node	*lst;
	int		i;

	i = 0;
	lst = q_a_or_b('b', var);
	while (i < lena_or_lenb(var))
	{
		if (!var->alt && is_in_chunk(lst->nb, c, var))
			return (i + 1);
		else if (var->alt && lst->nb == var->nb)
			return (i + 1);
		lst = lst->next;
		i++;
	}
	return (0);
}

int	find_bot(int c, t_var *var)
{
	t_node	*lst;
	int		i;

	i = 0;
	lst = q_a_or_b('e', var);
	while (i < lena_or_lenb(var))
	{
		if (!var->alt && is_in_chunk(lst->nb, c, var))
			return (i + 1);
		else if (var->alt && lst->nb == var->nb)
			return (i + 1);
		lst = lst->back;
		i++;
	}
	return (0);
}

int	find_nb(int c, t_var *var)
{
	int		n;
	int		top;
	int		bot;

	top = find_top(c, var);
	bot = find_bot(c, var);
	if (top > bot)
	{
		n = bot;
		n = -n;
	}
	else
		n = top;
	return (n);
}
