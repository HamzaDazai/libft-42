#include <stdio.h>
#include "libft.h" // Ensure this header file contains the declaration for ft_atoi

int main() {
    // Test cases for various scenarios including overflow
    char *test1 = "   -42";
    char *test2 = "42";
    char *test3 = "   +123abc";
    char *test4 = "   -2147483648"; // Minimum value for int
    char *test5 = "2147483647";     // Maximum value for int
    char *test6 = "0";
    char *test7 = "   42 with words";
    char *test8 = "2147483648";      // Overflow case
    char *test9 = "-2147483649";     // Underflow case
    char *test10 = "999999999999";   // Very large number

    printf("Input: '%s' => Output: %d\n", test1, ft_atoi(test1));
    printf("Input: '%s' => Output: %d\n", test2, ft_atoi(test2));
    printf("Input: '%s' => Output: %d\n", test3, ft_atoi(test3));
    printf("Input: '%s' => Output: %d\n", test4, ft_atoi(test4));
    printf("Input: '%s' => Output: %d\n", test5, ft_atoi(test5));
    printf("Input: '%s' => Output: %d\n", test6, ft_atoi(test6));
    printf("Input: '%s' => Output: %d\n", test7, ft_atoi(test7));
    printf("Input: '%s' => Output: %d\n", test8, ft_atoi(test8)); // Check overflow
    printf("Input: '%s' => Output: %d\n", test9, ft_atoi(test9)); // Check underflow
    printf("Input: '%s' => Output: %d\n", test10, ft_atoi(test10)); // Check large number

    return 0;
}
