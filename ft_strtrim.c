/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:59:11 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/14 18:12:03 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*f_str;
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = len;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	f_str = (char *)malloc(((end - start) + 1) * sizeof(char));
	if (f_str == NULL)
		return (NULL);
	while (start < end)
	{
		f_str[i++] = s1[start++];
	}
	f_str[i] = '\0';
	return (f_str);
}
