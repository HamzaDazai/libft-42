

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ds;
	const char	*sr;
	size_t		i;

	ds = (char *)dst;
	sr = (const char *) src;
	if (ds == sr || len == 0)
		return (ds);
	i = 0;
	if (ds < sr)
		return (ft_memcpy(ds, sr, len));
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
