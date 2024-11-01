/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:37:22 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/01 03:53:41 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    
    i = 0;
    while (s[i] != '\0')
    {
        (f)(i,&s[i]);
        i++;
    }
}
/*
void uppercase_with_index(unsigned int i, char *c) {
    if (*c >= 'a' && *c <= 'z') {  // Check if character is lowercase
        *c = ft_toupper(*c);          // Convert to uppercase
    }
    printf("Index %u: %c\n", i, *c); // Print index and character
}

int main() {
    char str[] = "hello, world!";

    printf("Original string: %s\n", str);
    ft_striteri(str, uppercase_with_index);
    printf("Modified string: %s\n", str);

    return 0;
}
*/