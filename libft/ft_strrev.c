/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:57:27 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/11 12:52:30 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int count;
	int len;
	int ascii;

	len = ft_strlen(str);
	count = 0;
	while (count < len / 2)
	{
		ascii = str[count];
		str[count] = str[len - count - 1];
		str[len - count - 1] = ascii;
		count++;
	}
	return (str);
}
