#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev_lst;

	if (!(lst) || !(*lst) || !del)
		return ;
	while (*lst)
	{
		prev_lst = *lst;
		*lst = prev_lst->next;
		ft_lstdelone(prev_lst, del);
	}
}
