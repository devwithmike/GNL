/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:54:19 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/29 10:15:49 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

char	*get_line(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\n' || src[i] != '\0')
		i++;
	dest = (char *)malloc(i + 1);
	i = 0;
	while (src[i] != '\n' || src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	remove_line(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] != '\n' || str[i] != '\0')
		j++;
	while (str[j] != '\0')
	{
		str[i] = str[j];
		j++;
		i++;
	}
	str[i] = '\0';
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
		text = (char *)malloc(ft_strlen(buf + 1));
		ft_strcpy(text, buf);
	}
	*line = get_line(*line, text);
	remove_line(text);
}
