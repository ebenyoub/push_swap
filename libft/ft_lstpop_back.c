/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:22:26 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/08/25 20:23:03 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

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
