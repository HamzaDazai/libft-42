#include "libft.h"

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = ft_strlen(src);
    if (dstsize == 0)
    {
        return (j);
    }
    if (dstsize > 0)
    {
        while(src[i] != '\0' && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (j);
}