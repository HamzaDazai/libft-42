#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// Assuming the definition of t_list is like this:
// typedef struct s_list
// {
//     void *content;
//     struct s_list *next;
// } t_list;

t_list *ft_lstnew(void *content)
{
    t_list *element;

    element = malloc(sizeof(t_list));
    if (element == NULL)
        return (NULL);
    element->content = content;
    element->next = NULL;
    return (element);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new->next = *lst;
    *lst = new;
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *p;
    t_list *tmp;

    if (lst == NULL || del == NULL)
        return;
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

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *po;

    if (lst == NULL || new == NULL)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    po = ft_lstlast(*lst);
    po->next = new;
}

int ft_lstsize(t_list *lst)
{
    t_list *count;
    int i;

    count = lst;
    i = 0;
    while (count != NULL)
    {
        count = count->next;
        i++;
    }
    return (i);
}

void ft_multtiy(void *content)
{
    *(int *)content *= 10;
}

void del(void *content)
{
    free(content);
}

int main()
{
    int c1 = 2004;
    int c2 = 2005;
    int c3 = 2006;
    int c4 = 2003;

    t_list *p0 = ft_lstnew(&c4);
    t_list *p = ft_lstnew(&c1);
    t_list *p1 = ft_lstnew(&c2);
    t_list *p2 = ft_lstnew(&c3);

    ft_lstadd_front(&p1, p);
    ft_lstadd_back(&p, p2);
    ft_lstadd_front(&p, p0);

    t_list *pp = p0;
    while (pp->next != p2 && pp->next != NULL)
        pp = pp->next;

    if (pp->next == p2)
    {
        pp->next = p2->next;
        ft_lstdelone(p2, del);
    }

    printf("Original list:\n");
    t_list *p_iter = p;
    while (p_iter)
    {
        printf("%d \n", *(int *)p_iter->content);
        p_iter = p_iter->next;
    }

    printf("Size of list: %d \n", ft_lstsize(p));

    printf("List after applying multiplication:\n");
    ft_lstiter(p,ft_multtiy);
    p_iter = p ;
    while (p_iter)
    {
        printf("%d \n", *(int *)p_iter->content);
        p_iter = p_iter->next;
    }
    return 0;
}
