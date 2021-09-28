/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:17:47 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/27 22:21:24 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    lstadd_front(char c, t_var *var, t_node *new)
{
	t_list	*lst;

	(c == 'a') ? (lst = A) : (lst = B);
	if (new)
	{
		if (!lst->be)
		{
			lst->length = 0; 
			lst->be = new;
			lst->end = new;
		}
		else
		{
			lst->be->back = new;
			new->next = lst->be;
			lst->be = new;
		}
		lst->length++;
	}
}

void    lstadd_back(t_list *lst, int nb)
{
	t_node	*new;

	new = new_element(nb);
	if (new)
	{
		if (lst->be == NULL)
		{
			lst->length = 0;
			lst->be = new;
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

void	lstpop_front(char c, t_var *var)
{
	t_node	*tmp;
	t_list	*lst;

	(c == 'a') ? (lst = var->la) : (lst = var->lb);
	if (!(lst->be))
		return;
	if (!lst->be->next)
	{
		free(lst->be);
		lst->be = NULL;
		lst->length--;
		return ;
	}
	tmp = lst->be;
	lst->be = lst->be->next;
	lst->be->back = NULL;
	free(tmp);
	tmp = NULL;
	lst->length--;
}

void	lstpop_back(char c, t_var *var)
{
	t_list	*lst;

	(c == 'a') ? (lst = A) : (lst = B);
	if (!lst->be)
		return;
	lst->end = lst->end->back;
	free(lst->end->next);
	lst->end->next = NULL;
	lst->length--;
}