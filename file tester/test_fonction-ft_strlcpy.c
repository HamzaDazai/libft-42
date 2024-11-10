#include "libft.h"
#include <string.h>
#include <stdio.h>

int main() {
    char dst[20] = "";
    const char *src = "hamza"; 
    size_t size = -11;
    size_t rs = ft_strlcpy(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Concatenated string: %ld\n", rs);
    return 0;
}
