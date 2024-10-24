#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = 't';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   ret  = strrchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
