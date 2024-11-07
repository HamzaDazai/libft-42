#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*po;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	po = ft_lstlast(*lst);
	po->next = new;
}