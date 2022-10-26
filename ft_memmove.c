/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:57:22 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/17 09:17:49 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int ln)
{
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dst;
	if (d == 0 && s == 0)
		return (0);
	if (d > s)
	{
		while (ln > 0)
		{
			d[ln - 1] = s[ln - 1];
			ln--;
		}
	}
	ft_memcpy(d, s, ln);
	return (dst);
}
