/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/24 10:12:57 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

void	set_text(char *text[], char *temp, const int fd)
{
	ft_strdel(&text[fd]);
	text[fd] = ft_strdup(temp);
	ft_strdel(&temp);
}

int		read_file(char *text[], const int fd, char *temp)
{
	char	buf[BUFF_SIZE + 1];
	int		red;

	if ((red = read(fd, buf, BUFF_SIZE)) == 0)
		return (0);
	buf[red] = '\0';
	temp = ft_strjoin(text[fd], buf);
	set_text(text, temp, fd);
	return (1);
}

int		single_line(char *text[], char **line, const int fd)
{
	*line = ft_strdup(text[fd]);
	ft_strclr(text[fd]);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*text[1024];
	char		*temp;
	char		*ptr;

	temp = NULL;
	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (!text[fd])
		text[fd] = ft_strnew(0);
	while ((ptr = ft_strchr(text[fd], '\n')) == NULL)
		if ((read_file(text, fd, temp)) == 0)
			break ;
	if (ft_strlen(text[fd]) != 0)
	{
		if (!(ft_strchr(text[fd], '\n')))
			return (single_line(text, &*line, fd));
		*ptr = '\0';
		temp = ft_strdup(ptr + 1);
		*line = ft_strdup(text[fd]);
		set_text(text, temp, fd);
	}
	else
		return (0);
	return (1);
}
