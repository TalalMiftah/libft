#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	if (!lst)
		return ;
	s = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(s)->next = new;
}
