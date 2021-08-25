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
# include <fcntl.h>
# include "../libft/libft.h"
# define BUFF 10

typedef struct      s_var
{
	int     *a;
}                   t_var;

t_list	*create_list(int argc, t_var *var);

int     get_next_line(int fd, char **line);
void	find_msg(int i);
void	m_exit(int i);
void	push_checkin(int argc, char **argv);
void    print_list(t_list **li);
void	param_convert(int argc, char **argv, t_var *var);

#endif
