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

t_list		*create_list(int argc, char **argv)
{
	t_list		*tmp;
	t_list		*new_element;
	void		*ptr;
	int			i;

	i = 1;
	tmp = NULL;
	while (i < argc)
	{
		ptr = &*argv[i];
		new_element = ft_lstnew(ptr);
		ft_lstadd_back(&tmp, new_element);
		i++;
	}
	return (tmp);
}

bool    is_empty_list(t_list **li)
{
	return (*li == NULL ? true : false);
}

void    print_list(t_list **li)
{
	t_list	*tmp;

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
			ft_putstr("[");
			ft_putstr((char *)tmp->content);
			ft_putstr("] ");
			tmp = tmp->next;
		}
		printf("\n");
	}
}

void	del(void *content)
{
	content = NULL;
}

t_list	*ft_lstpop_back(t_list **lst)
{
	t_list	*tmp;
	t_list	*before;
	
	if (*lst == NULL)
		return (NULL);
	tmp = *lst;
	before = *lst;
	if (!tmp->next)
	{
		free(tmp);
		tmp = NULL;
		return (NULL);
	}
	while (tmp->next)
	{
		before = tmp;
		tmp = tmp->next;
	}
	before->next = NULL;
	free(tmp);
	tmp = NULL;
	return (*lst);
}