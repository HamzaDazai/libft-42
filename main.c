#include <stdio.h>
#include <string.h>

void * ft_memcpy(void * dst, const void * src, size_t n);

int main ()
{
   const int src[4] = {1,2,3,4};
   int dest[4];
   ft_memcpy(dest, src, sizeof(src));
   unsigned long i = 0;
   printf("%lu\n",sizeof(src));

   while (i < 4)
   {
      printf("%d \n",dest[i]);
      i++;

   }

   return(0);
}
void * ft_memcpy(void * dst, const void * src, size_t n)
{
    char    *ds;
    const char    *sr;
    size_t  i;

    ds = (char *)dst;
    sr = (const char *)src;
    i = 0;
    while(i < n)
    {
        ds[i] = sr[i];
        i++;
    }
    return (ds);
}