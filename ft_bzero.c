
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (n--)
		*p_s++ = 0;
}
