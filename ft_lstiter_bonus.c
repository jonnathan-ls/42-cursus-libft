#include "libft.h"
// #include "_bonus.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_aux;

	if (!lst || !f)
		return ;
	lst_aux = lst;
	while (lst_aux)
	{
		f(lst_aux->content);
		lst_aux = lst_aux->next;
	}
}
