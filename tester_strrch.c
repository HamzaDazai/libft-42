#include "libft.h"

// Function prototype

// Main function for testing
int main(void)
{
    // Test case 1: Searching for a regular character 'l'
    const char str1[] = "Hello World!";
    char *result = ft_strrchr(str1, 'l');
    if (result != NULL)
        printf("Found last occurrence of 'l' at position: %ld\n", result - str1);
    else
        printf("Character 'l' not found.\n");

    // Test case 2: Searching for a non-existent character 'z'
    result = ft_strrchr(str1, 'z');
    if (result != NULL)
        printf("Found last occurrence of 'z' at position: %ld\n", result - str1);
    else
        printf("Character 'z' not found.\n");

    // Test case 3: Searching for an extended ASCII character 'é' (0xE9)
    const char str2[] = "Test String with \xE9 special character";
    result = ft_strrchr(str2, 0xE9);
    if (result != NULL)
        printf("Found last occurrence of extended ASCII 'é' at position: %ld\n", result - str2);
    else
        printf("Character 'é' (0xE9) not found.\n");

    // Test case 4: Searching for the null terminator ('\0')
    result = ft_strrchr(str1, '\0');
    if (result != NULL)
        printf("Found null terminator at position: %ld\n", result - str1);
    else
        printf("Null terminator not found.\n");

    // Test case 5: Empty string
    const char str3[] = "";
    result = ft_strrchr(str3, 'a');
    if (result != NULL)
        printf("Found character in empty string (unexpected).\n");
    else
        printf("Character not found in empty string (as expected).\n");

    return 0;
}

// ft_strrchr function using unsigned char for comparison (included for completeness)
/*char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence = NULL;

    // Iterate through the string to find the last occurrence of 'c'
    while (*s != '\0')
    {
        if (*s == (char)c)
            last_occurrence = s;
        s++;
    }

    // If 'c' is the null terminator, return pointer to the end of the string
    if (c == '\0')
        return (char *)s;

    return (char *)last_occurrence;
}*/
