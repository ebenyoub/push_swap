/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:25:22 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/10/04 19:22:46 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_lst(t_node *lst)
{
	if (!lst)
	{
		ft_putstr("\tEmpty list.\n");
		return ;
	}
	ft_putstr("\t");
	while (lst)
	{
		ft_putstr("[");
		ft_putnbr(lst->nb);
		ft_putstr("] ");
		lst = lst->next;
	}
	ft_putstr("\n");
}

bool	is_sorted_lst(t_node *lst)
{
	int	nbr;

	nbr = lst->nb;
	lst = lst->next;
	while (lst && lst->nb > nbr)
	{
		nbr = lst->nb;
		lst = lst->next;
	}
	if (!lst)
		return (true);
	return (false);
}
