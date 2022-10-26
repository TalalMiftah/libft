/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:19:17 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/26 19:13:53 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*c1;

	c1 = (char *)s;
	while (*c1 != '\0')
	{
		if (*c1 == (unsigned char)c)
			return (c1);
		c1++;
	}
	if (*c1 == '\0' && *c1 == (unsigned char)c)
		return (c1);
	return (NULL);
}
