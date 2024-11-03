/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:14:12 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/03 08:32:33 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
    t_list  *count;
    int i;
        
    count = lst;
    i = 0;
    while(count != NULL)
    {
        count = count->next;
        i++;
    }
    return (i);
}