#include "libft.h"

int ft_isalnum(int c)
{
    if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || ((c >= 48 && c <= 57)))
    {
        return (1);
    }
    return (0);
}