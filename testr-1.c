#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static char        *ft_char(char *s, unsigned int number, long int len)
{
        while (number > 0)
        {
                s[len--] = 48 + (number % 10);
                number = number / 10;
        }
        return (s);
}

static long int        ft_len(int n)
{
        int        len;

        len = 0;
        if (n <= 0)
                len = 1;
        while (n != 0)
        {
                len++;
                n = n / 10;
        }
        return (len);
}

char        *ft_itoa(int n)
{
        char                                *s;
        long int                        len;
        unsigned int                number;
        int                                        sign;

        sign = 1;
        len = ft_len(n);
        s = (char *)malloc(sizeof(char) * (len + 1));
        if (!(s))
                return (NULL);
        s[len--] = '\0';
        if (n == 0)
                s[0] = '0';
        if (n < 0)
        {
                sign *= -1;
                number = n * -1;
                s[0] = '-';
        }
        else
                number = n;
        s = ft_char(s, number, len);
        return (s);
}

int main() {
    long num =  214748364569569458;
    char *str = ft_itoa(num);
    if (str) {
        printf("Integer: %ld, String: %s\n", num, str);
        free(str);  // Free allocated memory after use
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}