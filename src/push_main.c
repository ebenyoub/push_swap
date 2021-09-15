/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:04:23 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/09/15 01:23:07 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

int     main(int argc, char **argv)
{
	t_var	*var;

	var = NULL;
	param_init(&argc, argv, &var);
	var->lst_a = make_list(argc, &var->tab);
	var->lst_b = new_list();
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");

	psh_pb(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");

	psh_pb(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");

	rot_ra(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");
	
	rev_rra(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");

	swp_sb(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");
	
	rot_ra(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");
	
	swp_ss(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	ft_putstr("\n");
	
	rev_rrr(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
	return (0);
}