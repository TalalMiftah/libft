/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:19:50 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/27 09:26:01 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c1;
	int		i;
	int		r;

	if (!s1 || !s2)
		return (NULL);
	c1 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!c1)
		return (NULL);
	i = 0;
	r = 0;
	while (s1[i] != '\0')
	{
		c1[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		c1[i] = s2[r];
		i++;
		r++;
	}
	c1[i] = '\0';
	return (c1);
}
