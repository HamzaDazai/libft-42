

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p_b;

	p_b = (unsigned char *)b;
	i = 0;
	if (len == 0)
		return (b);
	while (i < len)
	{
		p_b[i] = (unsigned char )c;
		i++;
	}
	return (b);
}
