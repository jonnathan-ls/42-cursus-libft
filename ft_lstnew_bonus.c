#include "libft.h"
// #include "_bonus.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*new_lst_content;

	new_lst_content = (t_list *)malloc(sizeof(t_list));
	if (new_lst_content)
	{
		new_lst_content->content = content;
		new_lst_content->next = NULL;
	}
	return (new_lst_content);
}
