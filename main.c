#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len;
    const char *p_haystack;
    const char *p_needle;

    needle_len = ft_strlen(needle);
    if (needle_len == 0) {
        return (char *)haystack; // Return haystack if needle is empty
    }

    while (*haystack != '\0' && len >= needle_len) {
        p_haystack = haystack;
        p_needle = needle;

        while (*p_haystack == *p_needle && *p_needle != '\0' && len > 0) {
            p_haystack++;
            p_needle++;
            len--; // Decrease len as we check each character
        }

        if (*p_needle == '\0') {
            return (char *)haystack; // Found needle, return current haystack
        }

        haystack++;
        len--; // Decrease len for the next iteration
    }

    return NULL; // Needle not found
}

int main() {
    const char *haystack1 = "Hello, world!";
    const char *needle1 = "world";
    
    const char *haystack2 = "Hello, world!";
    const char *needle2 = "lo";

    const char *haystack3 = "Hello, world!";
    const char *needle3 = "Hello";

    const char *haystack4 = "Hello, world!";
    const char *needle4 = "test"; // Not found

    const char *haystack5 = "Hello, world!";
    const char *needle5 = ""; // Empty needle

    const char *haystack6 = "Hello, world!";
    const char *needle6 = "world!"; // Needle at the end

    const char *haystack7 = "Hello, world!";
    const char *needle7 = "Hello, world!"; // Exact match

    const char *haystack8 = "Hello, world!";
    const char *needle8 = "World"; // Case sensitive

    size_t len = 20; // Test length

    // Test cases
    printf("Testing case 1:\n");
    printf("My function: %s\n", ft_strnstr(haystack1, needle1, len) ? ft_strnstr(haystack1, needle1, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack1, needle1, len) ? strnstr(haystack1, needle1, len) : "NULL");

    printf("\nTesting case 2:\n");
    printf("My function: %s\n", ft_strnstr(haystack2, needle2, len) ? ft_strnstr(haystack2, needle2, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack2, needle2, len) ? strnstr(haystack2, needle2, len) : "NULL");

    printf("\nTesting case 3:\n");
    printf("My function: %s\n", ft_strnstr(haystack3, needle3, len) ? ft_strnstr(haystack3, needle3, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack3, needle3, len) ? strnstr(haystack3, needle3, len) : "NULL");

    printf("\nTesting case 4:\n");
    printf("My function: %s\n", ft_strnstr(haystack4, needle4, len) ? ft_strnstr(haystack4, needle4, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack4, needle4, len) ? strnstr(haystack4, needle4, len) : "NULL");

    printf("\nTesting case 5:\n");
    printf("My function: %s\n", ft_strnstr(haystack5, needle5, len) ? ft_strnstr(haystack5, needle5, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack5, needle5, len) ? strnstr(haystack5, needle5, len) : "NULL");

    printf("\nTesting case 6:\n");
    printf("My function: %s\n", ft_strnstr(haystack6, needle6, len) ? ft_strnstr(haystack6, needle6, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack6, needle6, len) ? strnstr(haystack6, needle6, len) : "NULL");

    printf("\nTesting case 7:\n");
    printf("My function: %s\n", ft_strnstr(haystack7, needle7, len) ? ft_strnstr(haystack7, needle7, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack7, needle7, len) ? strnstr(haystack7, needle7, len) : "NULL");

    printf("\nTesting case 8:\n");
    printf("My function: %s\n", ft_strnstr(haystack8, needle8, len) ? ft_strnstr(haystack8, needle8, len) : "NULL");
    printf("Original: %s\n", strnstr(haystack8, needle8, len) ? strnstr(haystack8, needle8, len) : "NULL");

    return 0;
}