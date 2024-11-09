/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:34:24 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/09 16:57:46 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main()
// {
//     int c = 1337;
//     t_list *st = ft_lstnew(&c);
//     if(st != NULL)
//     {
//         printf("%d \n",*(int*)st ->content);
//         st = st -> next;
//     }
//     free(st);
//     return 0;
// }