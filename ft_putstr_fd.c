/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 04:23:37 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/01 05:06:46 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
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
}
int main()
{
    char s[] = "hamza dazia";
    ft_putstr_fd(s,-1);
    return 0;
}