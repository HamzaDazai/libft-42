/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:03:56 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/04 19:15:18 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	unsigned char	*ds;
	unsigned const char	*sr;
	size_t		i;

	if (dst == NULL|| src == NULL)
		return (dst);
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
