/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:23 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/04 19:22:34 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arry;
	size_t	over;
	
	over = nmemb *  size;
	if ((over / nmemb )!= size)
		return (NULL);
	arry = (void *) malloc(over);
	if (arry == NULL)
		return (NULL);
	ft_bzero (arry, over);
	return (arry);
}
