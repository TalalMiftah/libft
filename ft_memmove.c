/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:57:22 by tmiftah           #+#    #+#             */
/*   Updated: 2022/11/01 20:40:31 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int ln)
{
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dst;
	if (!d && !s)
		return (0);
	if (d > s)
	{
		while (ln > 0)
		{
			d[ln - 1] = s[ln - 1];
			ln--;
		}
	}
	else
		ft_memcpy(d, s, ln);
	return (dst);
}
