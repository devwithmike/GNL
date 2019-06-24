/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/24 08:48:47 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*text[1024];
	char		*temp;
	char		*ptr;
	int			red;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (!text[fd])
		text[fd] = ft_strnew(0);
	while ((ptr = ft_strchr(text[fd], '\n')) == NULL)
	{
		if ((red = read(fd, buf, BUFF_SIZE)) == 0)
			break ;
		buf[red] = '\0';
		temp = ft_strjoin(text[fd], buf);
		ft_strdel(&text[fd]);
		text[fd] = ft_strdup(temp);
		ft_strdel(&temp);
	}
	if (ft_strlen(text[fd]) != 0)
	{
		if (!(ft_strchr(text[fd], '\n')))
		{
			*line = ft_strdup(text[fd]);
			ft_strclr(text[fd]);
			return (1);
		}
		*ptr = '\0';
		temp = ft_strdup(ptr + 1);
		*line = ft_strdup(text[fd]);
		ft_strdel(&text[fd]);
		text[fd] = ft_strdup(temp);
		ft_strdel(&temp);
	}
	else
		return (0);
	return (1);
}
