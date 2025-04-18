#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_start;
	t_list	*lst_node;
	
	lst_start = NULL;
	if (!lst || !f || !del)
		return NULL;
	while (lst)
	{
		lst_node = ft_lstnew(f(lst->content));
		if (!lst_node)
		{
			ft_lstclear(&lst_start, del);
			return NULL;
		}
		ft_lstadd_back(&lst_start, lst_node);
		lst = lst->next;
	}
	return (lst_start);
}
