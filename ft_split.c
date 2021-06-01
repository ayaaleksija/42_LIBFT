/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agondard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:59:19 by agondard          #+#    #+#             */
/*   Updated: 2021/06/01 10:55:25 by agondard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(const char *str, char c)
{
	size_t	word;
	size_t	state;

	word = 0;
	state = 1;
	while (*str)
	{
		if (*str == c)
			state = 1;
		else
		{
			if (state == 1)
				word++;
			state = 0;
		}
		str++;
	}
	return (word);
}

size_t	ft_word_len(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	j;
	char	**splited;
	
	i = 0;
	if (str == 0)
		return (NULL);
	splited = (char *)malloc(sizeof(char *) * ft_countword(str, c) + 1);
	if (!splited)
		return (NULL);
	while (ft_wordcount(str, c))
	{
		while (*str && *str == c)
			str++;
		splited[i] = (char *)malloc(size of(char) * ft_word_len(str, c) + 1);
		if (!splited[i])
			retur (NULL);
	}

	
}

int	main()
{
	char str[] = " Alexia est la plus belle   de toute   s ";

	printf("%ld", ft_word_len(str + 1, ' '));

}
