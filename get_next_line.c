/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/17 11:01:38 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_line(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\n' && src[i] != '\0' && src[i] != '\r')
		i++;
	dest = ft_strnew(i);
	i = 0;
	while (src[i] != '\n' && src[i] != '\0' && src[i] != '\r')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*remove_line(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\n' && str[i] != '\0' && str[i] != '\r')
		i++;
	i++;
	while (str[j])
	{
		if (str[i])
			str[j] = str[i];
		else
			str[j] = '\0';
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

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
	*line = get_line(*line, text);
	text = remove_line(text);
	return (1);
}
