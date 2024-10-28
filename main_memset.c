#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

#define TEST_ASSERT(expr)                                                                      \
    if (!(expr)) {                                                                              \
        printf("Test failed at line %d: %s\n", __LINE__, #expr);                                   \
        exit(EXIT_FAILURE);                                                                      \
    }

int main() {
    // Basic test cases
    char str1[10] = "hello";
    ft_memset(str1, 'x', 5);
    TEST_ASSERT(strcmp(str1, "xxxxx") == 0);

    // Zero-length test
    char str2[10] = "world";
    ft_memset(str2, 'y', 0);
    TEST_ASSERT(strcmp(str2, "world") == 0);

    // Full-length test
    char str3[10] = "abcdefghi";
    memset(str3, 'z', 10);
    TEST_ASSERT(strcmp(str3, "zzzzzzzzzz") == 0);

    // Partial-length test
    char str4[10] = "abcdefghi";
    ft_memset(str4, 'a', 3);
    TEST_ASSERT(strcmp(str4, "aaabcdefgh") == 0);

    // Overlapping memory test
    char str5[10] = "abcdefghi";
    char *ptr1 = str5 + 2;
    char *ptr2 = str5 + 4;
    ft_memset(ptr1, 'x', 3);
    ft_memset(ptr2, 'y', 2);
    TEST_ASSERT(strcmp(str5, "abxxxyghi") == 0);

    // Edge case: negative length
    char str6[10] = "abcdefghi";
    ft_memset(str6, 'z', -1);
    // Behavior is undefined, but we can check if the string is unchanged
    TEST_ASSERT(strcmp(str6, "abcdefghi") == 0);

    // Performance test (Optional)
    // ...

    printf("All tests passed!\n");
    return 0;
}