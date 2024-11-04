/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:39:49 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/04 18:17:44 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned const char	*sr;
	size_t		i;

	ds = (unsigned char *)dst;
	sr = (unsigned const char *) src;
	if (ds == sr || len == 0)
		return (ds);
	i = 0;
	if (ds < sr)
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
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

// #include <stdio.h>
// #include <string.h>

// void *ft_memmove(void *dst, const void *src, size_t len);

// int main()
// {
// 	char src[20] = "123456789";
// 	char dst[20];

// 	// Test 6: Null destination, non-zero length
// 	printf("\nTest 6: Null Destination, Non-Zero Length\n");
// 	if (memmove(NULL, src, 5) == NULL)
// 		printf("Passed: Returned NULL for NULL destination\n");
// 	else
// 		printf("Failed: Did not handle NULL destination correctly\n");

// 	// Test 7: Null source, non-zero length
// 	printf("\nTest 7: Null Source, Non-Zero Length\n");
// 	if (memmove(dst, NULL, 5) == NULL)
// 		printf("Passed: Returned NULL for NULL source\n");
// 	else
// 		printf("Failed: Did not handle NULL source correctly\n");

// 	// Test 8: Both source and destination NULL with zero length
// 	printf("\nTest 8: Both Source and Destination NULL, Zero Length\n");
// 	if (memmove(NULL, NULL, 0) == NULL)
// 		printf("Passed: Handled NULL pointers with zero length correctly\n");
// 	else
// 		printf("Failed: Did not handle NULL pointers with zero length correctly\n");

// 	return 0;
// }
