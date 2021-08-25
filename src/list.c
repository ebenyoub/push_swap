/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:48:19 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/07/28 15:09:41 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

t_list		*create_list(int argc, t_var *var)
{
	t_list		*tmp;
	t_list		*new_element;
	int		*ptr;
	int		i;

	i = 0;
	tmp = NULL;
	while (i < argc - 1)
	{
		ptr = &var->a[i];
		new_element = ft_lstnew(ptr);
		ft_lstadd_back(&tmp, new_element);
		i++;
	}
	return (tmp);
}

void    print_list(t_list **li)
{
	t_list	*tmp;
	int	*n;

	tmp = *li;
	if (tmp == NULL)
	{
		ft_putstr("Empty list.\n");
		return ;
	}
	else
	{
		while (tmp)
		{
			n = tmp->content;
			ft_putstr("[");
			ft_putnbr(*n);
			ft_putstr("] ");
			tmp = tmp->next;
		}
		ft_putstr("\n");
	}
}

