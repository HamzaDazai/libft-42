#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   char dest_str[] = "oldstring";
   const char src_str[]  = "newstring";
   printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
   memmove(dest_str, src_str, 9);
   printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
   return(0);
}