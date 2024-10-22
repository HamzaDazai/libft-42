#include <stdio.h>
#include "libft.h"
#include <string.h>

int main() {
  char str1[] = "abcda", str2[] = "abcdb";
  int result;
  int n = 4 ;
  // comparing strings str1 and str2
  result = ft_strncmp(str1, str2, n);
  printf("ft_strcmp(str1, str2, and (n) ) = %d\n", result);
  
  result = strncmp(str1, str2, n);
  printf("strncmp(str1, str2) = %d\n", result);

  return 0;
}