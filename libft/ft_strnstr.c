/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:57:01 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/28 11:24:21 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t len2;

	if (*s2 == '\0')
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= len2)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
