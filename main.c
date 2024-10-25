#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   const char str[] = "TestStringMoreChars";
   const char ch = 'T';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   ret  = strrchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
