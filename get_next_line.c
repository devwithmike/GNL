/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/20 07:49:52 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*text;
	char		*temp;
	int			red;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	while ((red = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (!text)
			text = ft_strnew(0);
		temp = ft_strjoin(text, buf);
		ft_strdel(&text);
		text = ft_strdup(temp);
		if (ft_strchr(text, '\n'))
			break ;
	}
}
