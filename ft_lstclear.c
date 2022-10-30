/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiftah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:00:30 by tmiftah           #+#    #+#             */
/*   Updated: 2022/10/30 09:05:36 by tmiftah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*h;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		h = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = h;
	}
}
