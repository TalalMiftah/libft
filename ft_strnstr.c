/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:55:42 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/28 18:03:22 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ha, const char *ne, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!*ne)
		return ((char *)ha);
	if (!ha && n == 0)
		return (0);
	if (!*ha)
		return (0);
	while (i < n && ha[i])
	{
		j = 0;
		while ((ha[i + j] != '\0')
			&& (ha[i + j] == ne[j])
			&& (j < n - i))
		{
			if (ne[j + 1] == '\0')
				return ((char *)ha + i);
			j++;
		}
		i++;
	}
	return (0);
}
