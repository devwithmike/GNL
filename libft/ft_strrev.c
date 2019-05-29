/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:57:27 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/21 09:54:31 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int count;
	int len;
	int ascii;

	len = 0;
	while (str[len] != '\0')
		len++;
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
