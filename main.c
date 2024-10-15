#include "libft.h"

int main() {
    char str[] = "hamzad42";
    int i = 0;

    while (str[i] != '\0') {
        if (ft_isalpha(str[i])) {
            write(1, &str[i], 1);
        }
        i++;
    }
    return 0;
}