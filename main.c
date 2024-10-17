#include "libft.h"

int main() {
    int ch1 = 127;  // ASCII for 'A'
    int ch2 = 0; // Not in ASCII range

    if (ft_isascii(ch1)) {
        printf("%d is an ASCII character.\n", ch1);
    } else {
        printf("%d is not an ASCII character.\n", ch1);
    }

    if (ft_isascii(ch2)) {
        printf("%d is an ASCII character.\n", ch2);
    } else {
        printf("%d is not an ASCII character.\n", ch2);
    }

    return 0;
}
