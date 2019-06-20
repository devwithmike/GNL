/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/20 09:06:58 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*text;
	char		*temp;
	char		*ptr;
	int			red;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (!text)
		text = ft_strnew(0);
	while ((ptr = ft_strchr(text, '\n')) == NULL)
	{
		if ((red = read(fd, buf, BUFF_SIZE)) == 0)
			break ;
		buf[red] = '\0';
		temp = ft_strjoin(text, buf);
		ft_strdel(&text);
		text = ft_strdup(temp);
		ft_strdel(&temp);
	}
	if (ft_strlen(text) != 0)
	{
		*ptr = '\0';
		temp = ft_strdup(ptr + 1);
		*line = ft_strdup(text);
		ft_strdel(&text);
		text = ft_strdup(temp);
		ft_strdel(&temp);
	}
	else
		return (0);
	return (1);
}
