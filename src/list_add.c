/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:17:47 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 13:07:34 by ebenyoub         ###   ########lyon.fr   */
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
	if (!lst->begin || !lst->begin->next)
		return;
	lst->begin = lst->begin->next;
	free(lst->begin->back);
	lst->begin->back = NULL;
}

void	lstpop_back(t_list *lst)
{
	if (!lst->begin)
		return;
	lst->end = lst->end->back;
	free(lst->end->next);
	lst->end->next = NULL;
}