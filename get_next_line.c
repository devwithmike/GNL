/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:42:51 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/27 14:03:45 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFF_SIZE 4200

int		get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	arr[BUFF_SIZE + 1];
	int			reat;
	int			i;

	i = 0;
	reat = read(fd, buf, BUFF_SIZE);
	buf[reat] = '\0';
	if (buf[i] != '\0')
		ft_strcpy(arr, buf);

}
