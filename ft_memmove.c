/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:39:49 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/05 22:33:04 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	unsigned const char	*sr;
	size_t				i;

	ds = (unsigned char *)dst;
	sr = (unsigned const char *) src;
	if (ds == sr || len == 0)
		return (ds);
	i = 0;
	if (ds < sr)
		return (ft_memcpy(ds, sr, len));
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			ds[i] = sr[i];
		}
	}
	return (dst);
}
