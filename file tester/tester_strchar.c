#include "libft.h"

// Main function for testing
int main(void)
{
    // Test string with extended ASCII characters and regular ASCII
    const char str[] = "TestString\xC7MoreChars";  // Includes extended ASCII Ç (0xC7)
    
    // Test case 1: Searching for extended ASCII character Ç (0xC7)
    char *result = ft_strchr(str, 0xC7);
    if (result != NULL)
        printf("Found extended ASCII character 'Ç' at position: %ld\n", result - str);
    else
        printf("Character Ç not found.\n");

    // Test case 2: Searching for a regular ASCII character 'S'
    result = ft_strchr(str, 'S');
    if (result != NULL)
        printf("Found character 'S' at position: %ld\n", result - str);
    else
        printf("Character 'S' not found.\n");

    // Test case 3: Searching for a non-existent character (e.g., 'Z')
    result = ft_strchr(str, 'Z');
    if (result != NULL)
        printf("Found character 'Z' at position: %ld\n", result - str);
    else
        printf("Character 'Z' not found.\n");

    // Test case 4: Searching for the null terminator ('\0')
    result = ft_strchr(str, '\0');
    if (result != NULL)
        printf("Found null terminator at position: %ld\n", result - str);
    else
        printf("Null terminator not found.\n");

    return 0;
}
