#include <stdio.h>
#include <string.h>

int main()
{
  char dest[12] = "Hello hamza";
  const char *src = "Dazia!";
  size_t dest_size = 6;

  // Concatenate src to dest with size limit
  size_t result = strlcat(dest, src, dest_size);

  // Print the result
  printf("Concatenated string: %s\n", dest);
  printf("Total length of the string tried to create: %zu\n", result);

  return 0;
}