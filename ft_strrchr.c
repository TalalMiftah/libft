/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:41:34 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/20 10:57:57 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		ssize;
	int		r;
	char	*c1;

	ssize = ft_strlen(s);
	c1 = (char *)s;
	r = 0;
	while (ssize >= 0)
	{
		if (c1[ssize] == (unsigned char)c)
		{
			r = 1;
			break ;
		}
		else
			ssize--;
	}
	if (r == 0 && c != '\0')
		return (0);
	return (c1 + ssize);
}
