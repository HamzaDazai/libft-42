

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
	{
		return (src_len);
	}
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[j] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
