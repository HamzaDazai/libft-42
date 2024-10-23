#include <stdio.h>
#include <string.h>

int main() {
    char *source = "hamza dazia";
    char *substring = "a848949494794";
    char *result = strnstr(source, substring, 5);

    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found.\n");
    }

    return 0;
}
