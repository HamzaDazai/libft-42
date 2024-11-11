/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:53:12 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/11 13:36:51 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*p_haystack;
	const char	*p_needle;
	size_t		i;

	i = 0;
	if (haystack == NULL && len == 0 && needle != NULL)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0'
		&& ft_strlen(haystack) >= ft_strlen(needle)
		&& i < len)
	{
		p_haystack = haystack;
		p_needle = needle;
		while (*p_haystack == *p_needle && *p_needle != '\0'
			&& (i + (p_haystack - haystack)) < len)
		{
			p_haystack++;
			p_needle++;
		}
		if (*p_needle == '\0')
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (NULL);
}
