#include "libft.h"

void test_ft_memcmp(const char *label, const unsigned char *s1, const unsigned char *s2, size_t n) {
    int result = ft_memcmp(s1, s2, n);
    int expected = memcmp(s1, s2, n);  // Using the standard library function for comparison

    printf("%s:\n", label);
    printf("ft_memcmp result: %d\n", result);
    printf("memcmp result: %d\n", expected);
    printf("Test %s\n\n", (result == expected) ? "PASSED" : "FAILED");
}

int main() {
    // Basic tests
    unsigned char test1_a[] = "Hello";
    unsigned char test1_b[] = "Hello";
    test_ft_memcmp("Test 1: Same strings", test1_a, test1_b, 5);

    unsigned char test2_a[] = "Hello";
    unsigned char test2_b[] = "World";
    test_ft_memcmp("Test 2: Different strings", test2_a, test2_b, 5);

    // Extended ASCII tests
    unsigned char test3_a[] = {0x80, 0x81, 0x82, 0x83, 0x84};
    unsigned char test3_b[] = {0x80, 0x81, 0x82, 0x83, 0x85};
    test_ft_memcmp("Test 3: Extended ASCII (different last byte)", test3_a, test3_b, 5);

    unsigned char test4_a[] = {0x80, 0x81, 0x82, 0x83, 0x84};
    unsigned char test4_b[] = {0x80, 0x81, 0x82, 0x83, 0x84};
    test_ft_memcmp("Test 4: Extended ASCII (same bytes)", test4_a, test4_b, 5);

    unsigned char test5_a[] = {0xFF, 0xFE, 0xFD};
    unsigned char test5_b[] = {0xFF, 0xFE, 0xFC};
    test_ft_memcmp("Test 5: Extended ASCII (different last byte)", test5_a, test5_b, 3);

    // Edge cases
    test_ft_memcmp("Test 6: Empty strings", "", "", 0);
    test_ft_memcmp("Test 7: Empty vs non-empty", "", "a", 1);
    test_ft_memcmp("Test 8: Non-empty vs empty", "a", "", 1);

    // Comparing non-overlapping memory
    unsigned char test9_a[] = {1, 2, 3, 4, 5};
    unsigned char test9_b[] = {1, 2, 3, 6, 5};
    test_ft_memcmp("Test 9: Non-overlapping memory (different value)", test9_a, test9_b, 5);

    // Comparing overlapping memory
    unsigned char test10_a[] = "abcdef";
    test_ft_memcmp("Test 10: Overlapping memory (same)", test10_a + 1, test10_a + 1, 4);
    test_ft_memcmp("Test 11: Overlapping memory (different)", test10_a, test10_a + 1, 5);

    // Large tests
    unsigned char large_a[1024];
    unsigned char large_b[1024];
    memset(large_a, 0xAA, 1024);
    memset(large_b, 0xAA, 1024);
    test_ft_memcmp("Test 12: Large same blocks", large_a, large_b, 1024);

    memset(large_b, 0xAB, 1024);
    test_ft_memcmp("Test 13: Large different blocks", large_a, large_b, 1024);

    return 0;
}