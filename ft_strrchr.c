/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:37 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/24 16:25:36 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(const char *s, int c)
{
    int size_s;

    size_s = ft_strlen(s);
    while (size_s != 0)
    {
        if((unsigned char )s == (unsigned char)c)
            return ((char *)&s[size_s]);
        size_s--;
    }
    if (c == '\0')
        re
    
}