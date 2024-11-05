/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:28:28 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/05 03:28:31 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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