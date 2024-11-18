

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*ds;
	const char	*sr;
	size_t		i;

	if (!dst && !src && n >= 0)
		return (NULL);
	ds = (char *)dst;
	sr = (const char *)src;
	i = 0;
	while (src != dst && i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}
