#include <stdio.h>
#include <string.h>

int main() {
    const char str[] = "Hello, World!";
    char *result = strchr(str, 'W');

    if (result != NULL) {
        printf("Found 'W' at position: %ld\n", result - str);
    } else {
        printf("'W' not found!\n");
    }
    return 0;
}