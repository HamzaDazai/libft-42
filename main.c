#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
    for (int i = 0; i < 128; i++)
    {
        if (ft_isprint(i))
            printf("'%c' (ASCII: %d) is printable.\n", i, i);
        else
            printf("ASCII: %d is not printable.\n", i);
    }
    return 0;
}
