#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorialspoint");
   puts(str);

   memset(str, '#', 7);
   puts(str);
   putchar('\n');

   ft_memset(str,'-',8);
   printf("%s",str)
   
   return(0);
}