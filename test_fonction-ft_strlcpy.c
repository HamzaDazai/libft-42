#include "libft.h"
#include <string.h>

int main() {
    char dst[20] = "dst";
    const char *src = "";
    size_t size = 50;
    size_t rs = strlcat(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Concatenated string: %ld\n", rs);
    return 0;
}
