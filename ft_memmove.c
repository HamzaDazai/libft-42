/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:39:49 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/28 19:31:11 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    char    *ds;
    const char  *sr;
    size_t  i;

    ds = (char *)dst;
    sr = (const char *) src;
    i = 0;    
    if (*ds > *sr)
    {
        while (len > 0)
        {
            len--;
            ds[len] = sr[len];
        }
    }
    else
    {
        while (i < len)
        {
            ds[i] = sr[i];
            i++;
        }
    }
    return (dst);
}