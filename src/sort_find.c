/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:37:59 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/28 22:05:41 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

bool    is_in_chunk(int nb, int *chunk, t_var *var)
{
	int		i;

	i = 0;
	while (i < C)
	{
		printf("C = %d | chunk[i] = %d\n", C, chunk[i]);
		printf("i = %d\n", i);
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
	Q ? (lst = B->be) : (lst = A->be);
	while (i <= M)
	{
		if (!Q && is_in_chunk(lst->nb, var->chunk_tabs[c], var))
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
	Q ? (lst = B->end) : (lst = A->end);
	while (i <= M)
	{
		if (!Q && is_in_chunk(lst->nb, var->chunk_tabs[c], var))
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

	Q ? M = B->length / 2 : 0;
	Q && B->length % 2 == 0 ? M = M - 1 : 0;
	top = find_top(c, var);
	bot = find_bot(c, var);
	n = !top ? bot : top;
	!top ? n = -n : 0;
	return (n);
}
