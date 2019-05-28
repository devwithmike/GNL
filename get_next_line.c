/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:42:51 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/28 14:04:21 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *dest, char *src)
{
	i = 0;
	while (src[i] != '\n' && src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\n' && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		remove_until(char *str, int delimeter)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != delimeter && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (0);
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
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*text;
	int			red;

	(void)line;
	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	red = read(fd, buf, BUFF_SIZE);
	buf[red] = '\0';
	if (!text)
	{
		text = (char*)malloc(ft_strlen(buf + 1));
		ft_strcpy(text, buf);
	}
	*line = get_line(*line, text);
	if (remove_until(text, '\n') == 0)
		return (0);
	return (1);
}
