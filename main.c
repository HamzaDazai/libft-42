#include "libft.h"

int main()
{
   char source[] = "";

    // A copy of source is created dynamically
    // and pointer to copy is returned.
   char *target = strdup(source);
   char *dss = ft_strdup(source);

   printf("%s", target);
   printf("%s",dss);
   return 0;
}