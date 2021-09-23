/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:57:36 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/23 16:36:24 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

# define T	var->tab

t_node  *new_element(int nb)
{
	t_node  *new;

	!(new = (t_node *)malloc(sizeof(t_node))) ? m_exit() : 0;
	new->next = NULL;
	new->back = NULL;
	new->nb = nb;
	return (new);
}

t_list     *new_list()
{
	t_list	*lst;
	
	!(lst = (t_list *)malloc(sizeof(t_list))) ? m_exit() : 0;
	lst->be = NULL;
	lst->end = NULL;
	lst->length = 0;
	return (lst);
}

t_list	*make_list(int argc, t_var *var)
{
	t_list	*lst;
	int     i;

	i = 0;
	lst = new_list();
	if (argc > 0)
	{
		while (i < argc)
		{	
			lstadd_back(lst, T[i]);
			i++;
		}
	}
	return (lst);
}
