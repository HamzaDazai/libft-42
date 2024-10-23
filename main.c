#include "libft.h"

int main() {
    char *source = "hamza dazia";
    char *substring = "a1546949494";
    char *result = ft_strnstr(source, substring, 5);

    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found.\n");
    }

    return 0;
}