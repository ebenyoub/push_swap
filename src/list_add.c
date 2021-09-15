/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:17:47 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 20:51:47 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    lstadd_front(t_list *lst, t_node *new)
{
	if (new)
	{
		if (!lst->begin)
		{
			lst->length = 0; 
			lst->begin = new;
			lst->end = new;
		}
		else
		{
			lst->begin->back = new;
			new->next = lst->begin;
			lst->begin = new;
		}
		lst->length++;
	}
}

void    lstadd_back(t_list *lst, void *content)
{
	t_node	*new;

	new = new_element(content);
	if (new)
	{
		if (!lst->begin)
		{
			lst->length = 0;
			lst->begin = new;
			lst->end = new;
		}
		else
		{
			lst->end->next = new;
			new->back = lst->end;
			lst->end = new;
		}
		lst->length++;
	}
}

void	lstpop_front(t_list *lst)
{
	t_node	*tmp;

	if (!lst->begin)
		return;
	if (!lst->begin->next)
	{
		free(lst->begin);
		lst->begin = NULL;
		return ;
	}
	tmp = lst->begin;
	lst->begin = lst->begin->next;
	lst->begin->back = NULL;
	free(tmp);
	tmp = NULL;
}

void	lstpop_back(t_list *lst)
{
	if (!lst->begin)
		return;
	lst->end = lst->end->back;
	free(lst->end->next);
	lst->end->next = NULL;
}