/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:37:59 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/02 17:18:24 by ebenyoub         ###   ########lyon.fr   */
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
	lst = Q ? B->be : A->be;
	while (i < (Q ? B->length : A->length))
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
	lst = Q ? B->end : A->end;
	while (i < (Q ? B->length : A->length))
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
	n = top > bot ? bot : top;
	top > bot ? n = -n : 0;
	return (n);
}
