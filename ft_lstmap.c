#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list *list_curr;
	t_list *new_lst;

	if(!lst || !del || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	list_curr = lst->next;
	while(list_curr->next != NULL) {
		ft_lstlast(new_lst)->next = ft_lstnew(f(list_curr->content));
		list_curr = list_curr->next;
	}
	ft_lstlast(new_lst)->next = ft_lstnew(f(list_curr->content));
	return (new_lst);
}