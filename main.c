#include <stdio.h>

// Function prototype
char *ft_stchr(const char *s, int c);

// Main function for testing
int main(void)
{
    // Test string with extended ASCII characters and regular ASCII
    const char str[] = "TestString\xC7MoreChars";  // Includes extended ASCII Ç (0xC7)
    
    // Test case 1: Searching for extended ASCII character Ç (0xC7)
    char *result = ft_stchr(str, 0xC7);
    if (result != NULL)
        printf("Found extended ASCII character 'Ç' at position: %ld\n", result - str);
    else
        printf("Character Ç not found.\n");

    // Test case 2: Searching for a regular ASCII character 'S'
    result = ft_stchr(str, 'S');
    if (result != NULL)
        printf("Found character 'S' at position: %ld\n", result - str);
    else
        printf("Character 'S' not found.\n");

    // Test case 3: Searching for a non-existent character (e.g., 'Z')
    result = ft_stchr(str, 'Z');
    if (result != NULL)
        printf("Found character 'Z' at position: %ld\n", result - str);
    else
        printf("Character 'Z' not found.\n");

    // Test case 4: Searching for the null terminator ('\0')
    result = ft_stchr(str, '\0');
    if (result != NULL)
        printf("Found null terminator at position: %ld\n", result - str);
    else
        printf("Null terminator not found.\n");

    return 0;
}

// ft_stchr function using unsigned char for comparison
char *ft_stchr(const char *s, int c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if ((unsigned char)s[i] == (unsigned char)c)
            return (char *)&s[i];
        i++;
    }
    
    if (c == '\0')
    {
        return (char *)&s[i];  // returns pointer to '\0'
    }
    
    return NULL;  // If 'c' not found, return NULL
}
