/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:57:36 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/19 23:26:53 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

t_node  *new_element(int nb)
{
	t_node  *new;

	!(new = (t_node *)malloc(sizeof(t_node))) ? m_exit() : 0;
	if (nb)
	{
		new->next = NULL;
		new->back = NULL;
		new->nb = nb;
		return (new);
	}
	return (NULL);
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

t_list	*make_list(int argc, int *tab)
{
	t_list	*lst;
	int     i;

	i = 0;
	lst = new_list();
	if (argc > 0)
	{
		while (i < argc)
		{	
			lstadd_back(lst, tab[i]);
			i++;
		}
	}
	return (lst);
}
