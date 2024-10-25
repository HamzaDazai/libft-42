#include "libft.h"
#include <string.h>

int main() {
    char dst[20] = "";
    const char *src = "";
    size_t size = 20;
    size_t rs = strlcpy(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Concatenated string: %ld\n", rs);
    return 0;
}
