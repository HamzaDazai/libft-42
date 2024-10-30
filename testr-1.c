#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len); // Your implementation

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
