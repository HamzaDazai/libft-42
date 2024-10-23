#include "libft.h"

int main()
{
  char dest[120] = "Hello hamza";
  const char *src = "Dazia!";
  size_t dest_size = 55;

  // Concatenate src to dest with size limit
  size_t result = ft_strlcat(dest, src, dest_size);

  // Print the result
  printf("Concatenated string: %s\n", dest);
  printf("Total length of the string tried to create: %zu\n", result);

  return 0;
}
