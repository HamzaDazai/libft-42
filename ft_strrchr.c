/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:37 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/25 00:25:16 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size_s;

	size_s = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[size_s]);
	while (size_s >= 0)
	{
		if (s[size_s] == c)
			return ((char *)&s[size_s]);
		size_s--;
	}
	return (NULL);
}
