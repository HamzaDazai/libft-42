/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:12:43 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/24 15:59:51 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i] != '\0')
    {
        if ((unsigned char) s[i] == (unsigned char)c)
            return ((char *) &s[i]);
        i++;
    }
    if (c == '\0')
    {
        return ((char *)&s[i + 1]);
    }
    return NULL;
}