#include "libft.h"

int   main()
{
   char  src[10] = "hamza";
   char  dest[10] ;

   memcpy(dest,src,strlen(src));
   printf("%s",dest);
   return 0;
}