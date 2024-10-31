/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:37:31 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/30 19:44:27 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ds;
    size_t  i;
    size_t  s_len;
    
    if (s == NULL)
        return NULL;
    if (start >= len)
        return ft_strdup("");
    s_len = ft_strlen(s);
    i = 0;
    if (start + len > s_len)
        len = s_len - start;
    ds = (char *)malloc((len + 1) * sizeof(char));
    if (ds == NULL)
        return NULL;
    while (i < len)
    {
        ds[i] = s[start + i];
        i++;
    }
    ds[i] = '\0';
    return (ds);
}
int main ()
{
    char    *cd = ft_substr(NULL, 0, 0);
    printf("%s\n", cd);
    free(cd); 
    return 0;
}