#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_curr;
	t_list	*new_lst;
	t_list	*node;

	if (!lst || !del || !f)
		return (NULL);
	node = ft_lstnew(f(lst->content));
	if (!node)
		return (NULL);
	new_lst = node;
	list_curr = lst->next;
	while (list_curr->next != NULL)
	{
		node = ft_lstnew(f(list_curr->content));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstlast(new_lst)->next = node;
		list_curr = list_curr->next;
	}
	ft_lstlast(new_lst)->next = node = ft_lstnew(f(list_curr->content));
	if (!node)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	return (new_lst);
}
