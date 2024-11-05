/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:37 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/05 22:17:45 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size_s;

	size_s = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[size_s]);
	while (size_s > 0)
	{
		size_s--;
		if (s[size_s] == (char)c)
			return ((char *)&s[size_s]);
	}
	if (s[size_s] == (char)c)
		return ((char *)&s[size_s]);
	return (NULL);
}
