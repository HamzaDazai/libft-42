#include "libft.h"
#include <stddef.h>

// Helper function for string length
size_t ft_strlen(const char *str)
{ 
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    const char *p_haystack;
    const char *p_needle;
    size_t i;

    i = 0;
    if (*needle == '\0')
        return (char *)haystack;

    while (*haystack != '\0' && ft_strlen(haystack) >= ft_strlen(needle) && i < len)
    {
        p_haystack = haystack;
        p_needle = needle;

        // Check each character in haystack against needle within the length limit
        while (*p_haystack == *p_needle && *p_needle != '\0' && (i + (p_haystack - haystack)) < len)
        {
            p_haystack++;
            p_needle++;
        }

        // If the end of needle is reached, return the start of the match
        if (*p_needle == '\0')
            return (char *)haystack;

        i++;
        haystack++;
    }
    return NULL;
}

