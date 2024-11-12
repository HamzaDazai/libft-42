/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:56:41 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/12 08:31:04 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	p_char(char *str, unsigned int diget, int len)
{
	str[len--] = '\0';
	while (diget > 0 && len >= 0)
	{
		str[len--] = (diget % 10) + '0';
		diget /= 10;
	}
}

static long int	ft_conter_len(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	diget;
	long int		len;

	len = ft_conter_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		diget = -n;
	}
	else
		diget = n;
	p_char(str, diget, len);
	return (str);
}
