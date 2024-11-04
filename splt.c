#include "libft.h"
static char    **free_array(char **ptr, int i)
{
    while (i > 0)
    {
        i--;
        free(ptr[i]);
    }
    free(ptr);
    return (0);
}

static int    ft_count_words(char const *str, char c)
{
    int    i;
    int    count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            i++;
        else
        {
            count++;
            while (str[i] && str[i] != c)
                i++;
        }
    }
    return (count);
}

static char    *ft_putword(char *word, char const *s, int i, int word_len)
{
    int    j;

    j = 0;
    while (word_len > 0)
    {
        word[j] = s[i - word_len];
        j++;
        word_len--;
    }
    word[j] = '\0';
    return (word);
}

static char    **ft_split_words(char const *s, char c, char **s2, int num_words)
{
    int    i;
    int    word;
    int    word_len;

    i = 0;
    word = 0;
    word_len = 0;
    while (word < num_words)
    {
        while (s[i] && s[i] == c)
            i++;
        while (s[i] && s[i] != c)
        {
            i++;
            word_len++;
        }
        s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (!s2)
            return (free_array(s2, word));
        ft_putword(s2[word], s, i, word_len);
        word_len = 0;
        word++;
    }
    s2[word] = 0;
    return (s2);
}

char    **ft_split(char const *s, char c)
{
    char            **s2;
    unsigned int    num_words;

    if (!s)
        return (0);
    num_words = ft_count_words(s, c);
    s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (!s2)
        return (0);
    s2 = ft_split_words(s, c, s2, num_words);
    return (s2);
}


#include <stdio.h>
#include <stdlib.h>

// Function prototypes for the helper functions
char    **ft_split(char const *s, char c);

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