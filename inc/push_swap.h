/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:32:25 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/07/28 14:09:13 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef     enum
{
	true,
	false
}			bool;

typedef struct		s_first
{
	t_list			*first;
}					t_first;

typedef struct      s_stack
{
	int     *a;
	int     *b;
}                   t_stack;

bool    is_empty_list(t_list **li);
void    print_list(t_list **li);
void	del(void *content);
t_list	*ft_lstpop_back(t_list **lst);
t_list	*create_list(int argc, char **argv);
void    param_chekin(int argc, char **argv);
int		param_duplicate(int argc, char **argv);
void    init_stack(t_stack *sta, int argc, char **argv);

#endif