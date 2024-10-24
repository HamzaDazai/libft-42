#include "libft.h"
int main() 
{
   char str[] = "This is simple string";
   char* sh;

   printf("Searching for the character in 's' in the given string i.e. \"%s\"\n", str);
   sh = ft_strchr(str, '\0');

   if (sh != NULL) 
   {
       printf("Found at position- %ld\n", sh - str );
   }
   return 0;
}