/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 13:25:22 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 01:21:19 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    print_lst(t_node *lst)
{
	int		*n;

	if (!lst)
	{
		ft_putstr("\tEmpty list.\n");
		return ;
	}
	ft_putstr("\t");
	while (lst)
	{
		n = lst->content;
		ft_putstr("[");
		ft_putnbr(*n);
		ft_putstr("] ");
		lst = lst->next;
	}
	ft_putstr("\n");
}
