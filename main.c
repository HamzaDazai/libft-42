#include "libft.h"
#include <stdio.h>

int main()
{
    int arry[] = {21,22,11,14,22,5};
    int target = 22;
    int i = 0;

    while(i < sizeof(arry) / sizeof(arry[0]))
    {
        if (ft_memchr(&arry[i],target,sizeof(int)) != NULL)
        {
            printf("we found the target %d in index and tha addres of this target in arry is %p , %d \n", i,&arry[i],target);
            break ;
        }
        i++;
    }
    return 0;
}