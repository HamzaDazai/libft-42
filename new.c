#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert a character to lowercase
int ft_tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); // Convert uppercase to lowercase
    }
    return c; // Return the character unchanged if it's not uppercase
}

// Function to apply the transformation to each character
char ft_custom_tolower(unsigned int index, char c) {
    index = 0;
    return ft_tolower(c); // Use the original ft_tolower function
}

// Function to get the length of a string (if you don't have it in your libft.h)
size_t ft_strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

// Implementation of ft_strmapi
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL)
        return NULL;
    char    *str;
    unsigned int     i;

    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    i = 0;
    while(s[i] != '\0')
    {
        str[i] = (f)(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);    
}
// Main function to test ft_strmapi
int main() {
    char *result = ft_strmapi("TEST", ft_custom_tolower); // Use uppercase to test the conversion
    if (result != NULL) {
        printf("Result: %s\n", result);
        free(result); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
