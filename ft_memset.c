/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:55:42 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/14 17:14:54 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p_b;

	p_b = (unsigned char *)b;
	i = 0;
	if (len == 0)
		return (b);
	while (i < len)
	{
		p_b[i] = (unsigned char )c;
		i++;
	}
	return (b);
}
