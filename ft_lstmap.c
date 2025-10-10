#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list *list;
	t_list *node;

	if (!lst || !del || !f)
		return (NULL);
	list = NULL;
	while(lst) {
		node = ft_lstnew(f(lst->content));
		if(!node) {
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
