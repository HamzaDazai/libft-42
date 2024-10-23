#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;
    size_t  j;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = dst_len;
    j = 0;

    // If dstsize is less than or equal to the length of dst, return dstsize + src_len
    if (dstsize <= dst_len)
        return (dstsize + src_len);

    // Concatenate src to dst while avoiding overflow
    while (src[j] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }

    // Ensure null-termination
    dst[i] = '\0';

    // Return the total length of the string it tried to create
    return (dst_len + src_len);
}
