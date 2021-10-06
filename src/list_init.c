/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:57:36 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/06 15:51:44 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*new_element(int nb)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		list_less_exit();
	new->next = NULL;
	new->back = NULL;
	new->nb = nb;
	return (new);
}

t_list	*new_list(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		list_less_exit();
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
	lst = new_list();
	if (var->size > 0)
	{
		while (i < var->size)
		{	
			lstadd_back(lst, var->tab[i]);
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
