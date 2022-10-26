/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:04:13 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/20 11:12:16 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *str, int c, unsigned int n)
{
	int unsigned	i;
	unsigned char	*c1;

	i = 0;
	c1 = (unsigned char *)str;
	while (i < n)
	{
		if (c1[i] == (unsigned char)c)
			return (c1 + i);
		i++;
	}
	return (0);
}
