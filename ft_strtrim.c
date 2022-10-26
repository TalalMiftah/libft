/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:03:47 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/21 10:32:57 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(char const *s1, char const *set)
{
	int		ln;
	int		i;
	char	*s;

	i = 0;
	s = (char *)s1;
	ln = ft_strlen(s);
	while (i < ln)
	{
		if (ft_strchr(set, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int	end(char const *s1, char const *set)
{
	int		ln;
	char	*s;

	s = (char *)s1;
	ln = ft_strlen(s);
	while (ln > 0)
	{
		if (ft_strchr(set, s[ln - 1]) == 0)
			break ;
		ln--;
	}
	return (ln);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		st;
	int		ed;

	if (!s1)
		return (NULL);
	st = start(s1, set);
	ed = end(s1, set);
	if (!set)
		return (ft_strdup(s1));
	if (st >= ed)
		return (ft_strdup(""));
	else
		ptr = (char *)malloc(sizeof(char) * (ed - st + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (s1 + st), (ed - st + 1));
	return (ptr);
}
