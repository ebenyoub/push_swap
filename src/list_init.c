/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:57:36 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 14:05:10 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

t_node  *new_element(int nb)
{
	t_node  *new;

	!(new = (t_node *)malloc(sizeof(t_node))) ? m_exit(-1) : 0;
	new->next = NULL;
	new->back = NULL;
	new->nb = nb;
	return (new);
}

t_list     *new_list()
{
	t_list	*lst;
	
	!(lst = (t_list *)malloc(sizeof(t_list))) ? m_exit(-1) : 0;
	lst->be = NULL;
	lst->end = NULL;
	lst->length = 0;
	return (lst);
}

t_list	*make_list(t_var *var)
{
	t_list	*lst;
	int     i;

	i = 0;
	lst = new_list();
	if (S > 0)
	{
		while (i < S)
		{	
			lstadd_back(lst, T[i]);
			i++;
		}
	}
	free(T);
	T = NULL;
	return (lst);
}

void	free_list(t_var *var)
{
	while (A->be)
		lstpop_back('a', var);
	while (B->be)
		lstpop_back('b', var);
	free(A);
	free(B);
}
