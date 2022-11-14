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
