/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:59:15 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/27 08:38:06 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == 43 && str[i + 1] != 45)
		i++;
	if (str[i] == 45 && str[i + 1] != 43)
	{
		sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	if (sign == -1)
		result *= -1;
	return (result);
}
// #include <stdio.h>
// int main()
// {
// 	printf("1233654: %d\n",ft_atoi("1233654"));
//  printf("2147483647 : %d\n",ft_atoi("2147483647"));
//  printf("-2147483648 : %d",ft_atoi("-2147483648"));

//  return 0;
// }
