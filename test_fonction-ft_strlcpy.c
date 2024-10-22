#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlcpy(char *src, size_t size)
{
    char dst[100];  // Large enough to test copying
    size_t result;

    // Clear the destination array
    memset(dst, 0, sizeof(dst));

    result = ft_strlcpy(dst, src, size);

    printf("Source: \"%s\"\n", src);
    printf("Size: %zu\n", size);
    printf("Copied string: \"%s\"\n", dst);
    printf("Return value: %zu\n\n", result);
}

int main()
{
    // Test cases
    test_ft_strlcpy("Hello, world!", 0);   // size == 0
    test_ft_strlcpy("Hello, world!", 6);   // size < strlen(src)
    test_ft_strlcpy("Hello, world!", 20);  // size > strlen(src)
    test_ft_strlcpy("", 5);                // empty source string
    test_ft_strlcpy("Test", 1);            // small size (size == 1)

    return 0;
}
