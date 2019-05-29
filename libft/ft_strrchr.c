/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:57:12 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/28 11:24:40 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int		i;
	int		tmp;

	i = 0;
	tmp = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			tmp = i;
		++i;
	}
	if (c == '\0')
		return ((char*)str + i);
	if (tmp != -1)
		return ((char*)str + tmp);
	return (NULL);
}
