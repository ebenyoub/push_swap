/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 00:04:23 by ebenyoub          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/09/19 17:16:00 by ebenyoub         ###   ########lyon.fr   */
=======
/*   Updated: 2021/09/15 20:57:57 by ebenyoub         ###   ########lyon.fr   */
>>>>>>> 26a787e084cd773afd228ffa45f048d9c78b914c
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
<<<<<<< HEAD
	print_lst(var->lst_a->begin);
	sort_five(var);
	print_lst(var->lst_a->begin);
	print_lst(var->lst_b->begin);
=======
>>>>>>> 26a787e084cd773afd228ffa45f048d9c78b914c
	return (0);
}