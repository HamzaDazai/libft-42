 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:34:39 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/11 21:03:32 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int			sign;
	long int	rs;
	long int rs2;

	sign = 1;
	rs = 0;
	while (*str != '\0' && ((*str >= 9 && *str <= 13) || (*str == 32)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rs2 = rs;
		rs = rs * 10 + (*str - '0');
		if (rs / 10 != rs2 && sign == 1)
			return (-1);
		if (rs / 10 != rs2 && sign == -1)
			return (0);
		printf(" int %ld \n",rs2);
		str++;
	}
	return ((rs * sign));
}

int main()
{
	char	str[] = "     2147483649s9";
	int i = ft_atoi(str);
	printf("%d \n",i);
	printf("%d",atoi(str));
	return 0;
}