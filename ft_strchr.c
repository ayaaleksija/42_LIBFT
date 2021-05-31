/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 07:40:41 by agondard          #+#    #+#             */
/*   Updated: 2021/05/31 11:49:25 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	int				i;
	unsigned char	csearch;

	csearch = (unsigned char) c;
	i = 0;
	while (str[i])
	{
		if (str[i] == csearch)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == csearch)
		return ((char *)str + i);
	return (NULL);
}
