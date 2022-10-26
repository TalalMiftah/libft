/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:17:00 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/24 23:38:48 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			j++;
		while (*s && *s != c)
			s++;
	}
	return (j);
}

int	size(const char *s, char c)
{
	int	j;

	j = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		j++;
		s++;
	}
	return (j);
}

char	*allocation_of_words(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(size(s, c) * sizeof(char) + 1);
	if (!word)
		return (NULL);
	while (*s && *s != c)
		word[i++] = *s++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**ptr;

	j = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			ptr[j] = allocation_of_words(s, c);
			s++;
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	ptr[j] = NULL;
	return (ptr);
}
