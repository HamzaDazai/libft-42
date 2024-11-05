/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:03:56 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/05 22:38:35 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned const char	*sr;
	size_t				i;

	if (!dst && !src && n > 0)
		return (NULL);
	ds = (unsigned char *)dst;
	sr = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char str1[] = "hamza";
//     char str2[] = "hamza";
//     char src[] = "dazia";

//     printf("Original memcpy: %s\n", memcpy(str1, src, 6));
//     printf("Custom ft_memcpy: %s\n", ft_memcpy(str1, src, 6));

//     return 0;
// }
