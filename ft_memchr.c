/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:01:16 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/09 12:24:26 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p_s;
	size_t			i;

	p_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == (unsigned char)c)
			return (&p_s[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "hamza dazia ";
// 	char c = 'z';
// 	printf("%s \n",ft_memchr(str,c,472745747474));
// 	printf("%p \n",ft_memchr(str,c,sizeof(str)));
// 	printf("%s \n",memchr(str,c,4772154579));
// 	printf("%p",memchr(str,c,sizeof(str)));
// 	return 0;
// }