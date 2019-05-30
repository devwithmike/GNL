/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:11:36 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/30 08:51:00 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 3
# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_line(char *dest, char *src);
int		remove_line(char *str);
int		get_next_line(const int fd, char **line);

#endif
