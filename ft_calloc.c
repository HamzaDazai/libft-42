/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:23 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/30 15:59:58 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb < 0 || size < 0)
		return NULL;
	void	*arry;
	
	arry = (void *) malloc(nmemb * size);
	if (arry == NULL)
		return NULL;
	ft_bzero(arry,(nmemb * size));
	return (arry);
}