/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:35:07 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/23 18:35:08 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;
    size_t  j;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = dst_len;
    j = 0;
    if (!dst || !src)
        return (0);
    if (dstsize <= dst_len)
        return(dstsize + src_len);
    while (src[j] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (dst_len + src_len);
}