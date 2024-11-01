/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 02:33:55 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/01 03:47:38 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL)
        return NULL;
    char    *str;
    unsigned int    i;

    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    i = 0;
    while(s[i] != '\0')
    {
        str[i] = (f)(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);    
}
/*
int main()
{
    char *s = ft_strmapi("HAMZA",cast_tolowe);
    printf("%s",s);
    free(s);
    return (0);
}*/