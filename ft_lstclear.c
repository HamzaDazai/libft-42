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
        p = p->next;
        tmp = p;
        del(tmp->content);
        free(tmp);
    }
    *lst = NULL;
}