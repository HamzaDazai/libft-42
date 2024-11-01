/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 05:21:39 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/01 05:29:29 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL || fd < 0)
        return;
    unsigned int    i;

    i = 0;
    while(s[i] != '\0')
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
    write(1, "\n", 1);
}
/* 
int main()
{
    char s[] = "hamza dazia";
    ft_putendl_fd(s,1);
    return 0;
}*/