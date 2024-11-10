#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static long int     ft_len(int n)
{
    int len;
    
    len = 0;
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while(n > 0)
    {
        n /= 10;
        len++;
    }
    return len;
}
int main()
{
    int len = -100;
    int ss;
    int s = ft_len(len);
    while (len > 0)
    {
        ss = len %10 + '0';
        printf("%d",len);
        len /= 10;
        printf("%d",len);
    }
    printf("%d",s);
    return 0;
}