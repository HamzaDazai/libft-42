#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *test1 = "Hello, world!";
    char *test2 = "42 School";
    char *test3 = "";
    char *test4 = "C programming";

    printf("Length of '%s': %d\n", test1, ft_strlen(test1));
    printf("Length of '%s': %d\n", test2, ft_strlen(test2));
    printf("Length of '%s': %d\n", test3, ft_strlen(test3));
    printf("Length of '%s': %d\n", test4, ft_strlen(test4));

    return 0;
}