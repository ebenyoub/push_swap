/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenyoub <ebenyoub@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:39:47 by ebenyoub          #+#    #+#             */
/*   Updated: 2021/08/20 21:03:27 by ebenyoub         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/push_swap.h"

int		end_line(char **tmp, int len, char **line)
{
	if (len < 0)
		return (-1);
	if (len == 0)
	{
		if (!(*line = ft_strdup(*tmp)))
			return (-1);
		free(*tmp);
		return (0);
	}
	return (-1);
}

int		new_line(char **tmp, int len, char **line)
{
	int				i;
	char			*clean;

	i = 0;
	if (*tmp == NULL)
	{
		if (!(*line = ft_strdup("")))
			return (-1);
		return (0);
	}
	while ((*tmp)[i] != '\n' && (*tmp)[i] != '\0')
		i++;
	if ((*tmp)[i] == '\n')
	{
		if (!((*line) = ft_substr((*tmp), 0, i)))
			return (-1);
		if (!(clean = ft_strdup(&(*tmp)[i + 1])))
			return (-1);
		free(*tmp);
		(*tmp) = clean;
	}
	else if (len < 1)
		return (end_line(tmp, len, line));
	return (1);
}

int		fill_buffer(int len, char *buffer, char **tmp)
{
	char			*clean;

	buffer[len] = '\0';
	if (*tmp == NULL)
	{
		if (!(*tmp = ft_strdup(buffer)))
			return (-1);
	}
	else
	{
		if (!(clean = ft_strjoin(*tmp, buffer)))
			return (-1);
		free(*tmp);
		*tmp = clean;
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int				len;
	char			buffer[BUFF + 1];
	static char		*tmp;

	if (!(line) || fd < 0 || BUFF < 1 || (read(fd, NULL, 0) < 0))
		return (-1);
	while (ft_strchr_gnl(tmp) == 0)
	{
		if ((len = read(fd, buffer, BUFF)) > 0)
		{
			if ((fill_buffer(len, buffer, &tmp)) == -1)
				return (-1);
		}
		else
			break ;
	}
	return (new_line(&tmp, len, line));
}