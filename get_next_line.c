/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/29 15:21:41 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
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
		ft_strcpy(dest, src);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		remove_line(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\n' && str[i] != '\0')
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
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*text;
	int			red;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	red = read(fd, buf, BUFF_SIZE);
	buf[red] = '\0';
	if (!text)
	{
		text = ft_strnew(ft_strlen(buf));
		ft_strcpy(text, buf);
	}
	*line = get_line(*line, text);
	if (remove_line(text) <= 0)
		return (0);
	return (1);
}
