#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *p;
    t_list  *tmp;
    if (lst == NULL || del == NULL)
        return ;
    p = *lst;
    while (p != NULL)
    {
        tmp = p;
        p = p->next;
        del(tmp->content);
        free(tmp);
    }
    *lst = NULL;
}