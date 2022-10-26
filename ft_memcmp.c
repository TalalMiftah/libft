/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:32:00 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/16 19:06:35 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *str1, void *str2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)str1;
	c2 = (unsigned char *)str2;
	while (i < n)
	{
		if (c1[i] == c2[i])
			i++;
		else
			return (c1[i] - c2[i]);
	}
	return (0);
}
