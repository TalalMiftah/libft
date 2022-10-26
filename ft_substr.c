/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:17:42 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/21 10:31:52 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*c;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	c = malloc(len * sizeof(char) + 1);
	if (!c)
		return (NULL);
	while (i < len)
	{
		c[i] = s[start];
		i++;
		start++;
	}
	c[i] = '\0';
	return (c);
}
