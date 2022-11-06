/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:31:11 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/27 09:27:19 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_count(int i)
{
	int	r;

	r = 0;
	if (i <= 0)
		r = 1;
	while (i != 0)
	{
		i = i / 10;
		r++;
	}
	return (r);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		ln;
	long	result;

	i = 0;
	result = n;
	ln = int_count(n);
	s = malloc(ln + 1);
	if (!s)
		return (NULL);
	if (result < 0)
	{
		result *= -1;
		s[i] = '-';
		i++;
	}
	s[ln] = '\0';
	while (ln > i)
	{
		s[ln - 1] = (result % 10) + '0';
		result = result / 10;
		ln--;
	}
	return (s);
}
