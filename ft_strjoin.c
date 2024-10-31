/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:45:49 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/31 08:45:47 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (*s1 == NULL || *s2 == NULL )
        return NULL;
    char    *all_str;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    i = 0;
    j = 0;
    all_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
    if (all_str == NULL)
        return NULL;
    while(s1[i] != '\0')
    {
        all_str[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        all_str[i] = s2[j];
        i++;
        j++;
    }
    all_str[i] = '\0';
    return (all_str);
    
}

int main(void)
{
    
}
