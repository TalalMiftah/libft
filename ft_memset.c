/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:49:32 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/26 17:52:26 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*s1;

	s1 = (unsigned char *)dest;
	i = 0;
	while (count > i)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s1);
}
