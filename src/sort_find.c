/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:37:59 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 21:07:05 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

bool    is_in_chunk(int nb, int *chunk, t_var *var)
{
	int		i;

	i = 0;
	while (i < C)
	{
		if (nb == chunk[i])
			return (true);
		i++;
	}
	return (false);
}

int     find_top(int c, t_var *var)
{
	t_node	*lst;
	int     i;

	
	i = 0;
	
	lst = q_a_or_b('b', var);
	while (i < lena_or_lenb(var))
	{
		if (!Q && is_in_chunk(lst->nb, K[c], var))
			return (i + 1);
		else if (Q && lst->nb == var->nb)
			return (i + 1);
		lst = lst->next;
		i++;
	}
	return (0);
}

int     find_bot(int c, t_var *var)
{
	t_node	*lst;
	int     i;

	i = 0;
	lst = q_a_or_b('e', var);
	while (i < lena_or_lenb(var))
	{
		if (!Q && is_in_chunk(lst->nb, K[c], var))
			return (i + 1);
		else if (Q && lst->nb == var->nb)
			return (i + 1);
		lst = lst->back;
		i++;
	}
	return (0);
}

int		find_nb(int c, t_var *var)
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
