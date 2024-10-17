#include "libft.h"

int main() {
    char str[] = "ham22da2";
    int i = 0;

    while (str[i] != '\0') {
        if (ft_isalpha(str[i])) {
            write(1, &str[i], 1);
        }
        else if (ft_isdigit(str[i]))
        {
            write(1,"g", 1);
        }
        i++;
    }
    return 0;
}