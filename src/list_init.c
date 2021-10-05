/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:57:36 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/05 15:19:04 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*new_element(int nb, t_var *var)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		m_exit(-1, var);
	new->next = NULL;
	new->back = NULL;
	new->nb = nb;
	return (new);
}

t_list	*new_list(t_var *var)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		m_exit(-1, var);
	lst->be = NULL;
	lst->end = NULL;
	lst->length = 0;
	return (lst);
}

t_list	*make_list(t_var *var)
{
	t_list	*lst;
	int		i;

	i = 0;
	lst = new_list(var);
	if (var->size > 0)
	{
		while (i < var->size)
		{	
			lstadd_back(var, lst, var->tab[i]);
			i++;
		}
	}
	return (lst);
}

void	free_list(t_var *var)
{
	if (var->la->be || var->lb->be)
	{
		while (var->la->be)
		{
			if (var->la->be)
				lstpop_back('a', var);
		}
		while (var->lb->be)
		{
			if (var->lb->be)
				lstpop_back('b', var);
		}
	}
	free(var->la);
	free(var->lb);
}
