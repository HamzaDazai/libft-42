#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

static void ft_print_strings(const char *s, char *s1, int j, int word_len)
{
    int i = 0;
    while (word_len > 0)
    {
        s1[i] = s[j - word_len];
        i++;
        word_len--;
    }
    s1[i] = '\0';  // Fix: null-terminate the string
}

static char **ft_split_string(const char *s, char c, char **s1, int c_words)
{
    int j = 0;
    int word = 0;
    int word_len;

    while (word < c_words)
    {
        while (s[j] && s[j] == c)
            j++;
        word_len = 0; // Reset word_len for each word
        int start = j; // Store the start index of the word

        while (s[j] && s[j] != c)
        {
            j++;
            word_len++;
        }
        
        // Allocate memory for each word
        s1[word] = (char *)malloc((word_len + 1) * sizeof(char));
        if (!s1[word]) // Check for allocation failure
        {
            for (int k = 0; k < word; k++)
                free(s1[k]); // Free already allocated memory
            free(s1);
            return NULL;
        }
        
        ft_print_strings(s, s1[word], j, word_len);
        word++;
    }
    s1[word] = NULL; // Null-terminate the array of strings
    return s1;
}

static int ft_count_words(const char *s, char ch)
{
    int i = 0;
    int c_word = 0;
    int in_word = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ch)
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            c_word++;
        }
        i++;
    }
    return c_word;
}

char **ft_split(const char *s, char c)
{
    char **s1;
    unsigned int c_words;

    if (!s)
        return NULL;
    c_words = ft_count_words(s, c);
    s1 = (char **)malloc((c_words + 1) * sizeof(char *));
    if (s1 == NULL)
        return NULL;
    
    return ft_split_string(s, c, s1, c_words);
}


// Function prototypes for the helper functions
char **ft_split(char const *s, char c);

// Function to print and free the result of ft_split
void print_and_free(char **result)
{
    int i = 0;
    while (result[i] != NULL)
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
}

// Main function to test ft_split
int main(void)
{
    char test_str[] = "This is a test string with multiple words";
    char delimiter = ' ';
    char **result;

    result = ft_split(test_str, delimiter);

    // Print the words in the result array
    print_and_free(result);

    return 0;
}
// Function to print and free the result of ft_split
void    print_and_free(char **result)
{
    int i = 0;
    while (result[i] != NULL)
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
}

// Main function to test ft_split
int main(void)
{
    char test_str []= "This is a test string with multiple words";
    char delimiter = ' ';
    char **result;

    result = ft_split(test_str, delimiter);

    // Print the words in the result array
    print_and_free(result);

    return (0);
}
