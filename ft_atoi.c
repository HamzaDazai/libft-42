/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:34:39 by hdazia            #+#    #+#             */
/*   Updated: 2024/10/31 07:02:08 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	rs;

	i = 0;
	sign = 1;
	rs = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rs = rs * 10 + (str[i] - '0');
		i++;
	}
	if (sign == 1 && rs < 0)
		return (-1);
	if (sign == -1 && rs > 0)
		return (0);
	return (rs * sign);
}
