//#include "libft.h"
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
int	ft_lstsize(t_list *lst)
{
	t_list	*count;
	int		i;

	count = lst;
	i = 0;
	while (count != NULL)
	{
		count = count->next;
		i++;
	}
	return (i);
}


int main()
{
	int c1 = 2004;
	int	c2 = 2005;

	t_list *p = ft_lstnew(&c1);
	t_list *p1 = ft_lstnew(&c2);
	t_list * head ; 
	ft_lstadd_front(&p1,p);
	head = p1;
	while (head)
	{
		printf("%d \n", *(int *)head->content);
		head = head->next;
	}
	printf("%d",ft_lstsize(p1));

	return 0;
}