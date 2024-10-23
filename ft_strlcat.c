#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;
    size_t  j;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = dst_len;
    j = 0;
    if (dstsize == 0)
        return (ft_strlen(dst));
    
    while (dst[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst) + ft_strlen(src));
}