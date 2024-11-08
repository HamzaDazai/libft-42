/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:39:08 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/08 21:56:54 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (n--)
		*p_s++ = 0;
}

/*
{
    char str[] = "Hello, world!";
    size_t len = 5;

    printf("Before ft_bzero: %s\n", str);

    ft_bzero(str,1);
    printf("ssss ft_bzero \n: ");
    for (size_t i = 0; i < sizeof(str); i++)
    {
		
        if (str[i] == '\0')
            printf("0");
        else
            putchar(str[i]);
    }
    printf("\n");

    return 0;
}
*/