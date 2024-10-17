#include <stdio.h>
#include "libft.h"

int main() {
    char test_chars[] = {'A', 'D', 'C', 'D', 'a', 'd', 'C', 'Z', '1', '!', ' '};
    int num_chars = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Testing ft_toupper:\n");
    for (int i = 0; i < num_chars; i++) {
        char original = test_chars[i];
        char upper = ft_tolower(original);
        printf("ft_toupper('%c') = '%c'\n", original, upper);
    }

    return 0;
}
