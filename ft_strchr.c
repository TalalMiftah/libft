/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <tmiftah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:19:17 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/20 10:48:48 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		r;
	char	*c1;

	i = 0;
	r = 0;
	c1 = (char *)s;
	while (c1[i] != '\0')
	{
		if (c1[i] == (unsigned char)c)
		{
			r = 1;
			break ;
		}
		else
			i++;
	}
	if (r == 0 && c != '\0')
		return (0);
	return (c1 + i);
}
