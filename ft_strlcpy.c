#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = ft_strlen(src);
    if (size == 0)
    {
        return (j);
    }
    if (size > 0)
    {
        while(src[i] != '\0' && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (j);
}