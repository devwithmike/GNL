/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:03:53 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/27 16:21:39 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#define BUFF_SIZE 4200

int		get_next_line(const int fd, char **line)
{
	static char buf[BUFF_SIZE + 1];
	int			i;
	int			ret;

	i = 0;
	ret = read(fd, buf, BUFF_SIZE);
	while (buf[i] != '\n')
	{
		ft_putchar(buf[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	get_next_line(fd, &line);
	ft_putchar('\n');
	if (argc == 2)
		close(fd);
}
