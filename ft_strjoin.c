/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:45:49 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/07 10:30:36 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char  const *check_null(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if ( s1 == NULL)
		return (s2);
	if ( s2 == NULL)
		return (s1);
	return (NULL);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*all_str;
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;
	size_t		j;
	if (s1 == NULL || s2 == NULL)
		return ((char *)check_null(s1,s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = 0;
	all_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (all_str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		all_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		all_str[i++] = s2[j++];
	all_str[i] = '\0';
	return (all_str);
}

// int main(void)
// {
//     char *all[]= {"simo",NULL};
//     char *ch= ft_strjoin(all[0],all[1]);
//     printf("%s \n",ch);
//     return 0;
// }
