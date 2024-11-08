#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void test_trim(char *str, char *set)
{
    char *trimmed = ft_strtrim(str, set);
    if (trimmed)
    {
        printf("Original: '%s', Set: \n'%s', Trimmed: '%s'\n", str, set, trimmed);
        free(trimmed);
    }
    else
    {
        printf("Original: '%s', Set:  \n'%s', Trimming failed.\n", str, set);
    }
}

int main(void)
{
    // اختبار سلسلة ذات حروف زائدة في البداية والنهاية
    test_trim("azraz az hamza azz azraz" , "azraz");
    
    return 0;
}
