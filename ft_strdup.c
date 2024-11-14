/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:36:38 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/14 17:21:34 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}
