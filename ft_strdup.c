/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:16:24 by agondard          #+#    #+#             */
/*   Updated: 2021/05/20 15:18:26 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		size;

	size = ft_strlen(src);
	cpy = (char *)malloc(sizeof (char) * (size + 1));
	if (!cpy)
		return (NULL);
	size = 0;
	while (src[size])
	{
		cpy[size] = src[size];
		size++;
	}
	cpy[size] = '\0';
	return (cpy);
}
