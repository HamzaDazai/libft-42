#include <stdio.h>
#include <string.h>
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
  {
    i++;
  }
  return (s1[i] - s2[i]);
}

int main()
{
  char str1[] = "abcda", str2[] = "abcdb";
  int result;
  int n = 4;
  // comparing strings str1 and str2
  result = ft_strncmp(str1, str2, n);
  printf("ft_strcmp(str1, str2, and (n) ) = %d\n", result);

  result = strncmp(str1, str2, n);
  printf("strncmp(str1, str2) = %d\n", result);

  return 0;
}