#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmplst;
	void	*tmp;

	if (!f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		tmplst = ft_lstnew(tmp);
		if (tmplst == NULL)
		{
			del(tmp);
			ft_lstclear(&newlst, del);
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmplst);
		lst = lst->next;
	}
	return (newlst);
}
