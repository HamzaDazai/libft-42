#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  s_len;
    char    *d;

    s_len = ft_strlen(s);
    if (start >= s_len) 
        return strdup(""); 
 
    d = (char *)malloc((len + 1) * sizeof(char)); 
    if (d == NULL)
        return NULL;
    i = 0;
    while (i < len)
    {
        d[i] = s[start + i];
        i++;
    }
    d[i] = '\0';
    return d;
}

int main ()
{
    char    s[]="HamzaDazia";
    char    *cd = ft_substr(s, 2, 10040);
    printf("%s\n", cd);
    printf("%zu",ft_strlen(s));
    free(cd); 
    return 0;
}
