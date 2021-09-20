/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_rot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 00:12:02 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/20 15:07:56 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

void    rot_ra(t_var *var)
{
	int		tmp;

	if (!A->be || !A->be->next)
		return ;
	tmp = A->be->nb;
	lstpop_front(A);
    lstadd_back(A, tmp);
	!F ? ft_putstr("ra\n") : 0;
	print_lst(A->be);
	print_lst(B->be);
}

void    rot_rb(t_var *var)
{
	int		tmp;

	if (!B->be || !B->be->next)
		return ;
	tmp = B->be->nb;
	lstpop_front(B);
    lstadd_back(B, tmp);
	!F ? ft_putstr("rb\n") : 0;
	print_lst(A->be);
	print_lst(B->be);
}

void    rot_rr(t_var *var)
{
	F = true;
    rot_ra(var);
    rot_rb(var);
	F = false;
    ft_putstr("rr\n");
}