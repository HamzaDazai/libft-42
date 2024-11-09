/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:32:23 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/09 11:56:01 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	array = (void *)malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, (nmemb * size));
	return (array);
}

// int main()
// {
// 	int i = 5;
// 	int *arry;
// 	arry = (int *)ft_calloc(5,sizeof(int));
// 	if (arry == NULL)
// 		return NULL;
// 	size_t o = 0;
// 	while(o < i)
// 	{
// 		printf("%d", arry[o]);
// 		o++;
// 	}
// 	free(arry);
// 	return 0;
// }