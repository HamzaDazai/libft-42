#include <stdlib.h>
#include <stddef.h>

static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(const char *s1, const char *set)
{
    if (!s1 || !set)
        return NULL;

    size_t start = 0;
    size_t end = 0;

    // Find the starting position that is not in the set
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    // Find the ending position that is not in the set
    end = start;
    while (s1[end])
        end++;
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    // Allocate memory for the trimmed string
    char *trimmed = (char *)malloc((end - start + 1) * sizeof(char));
    if (!trimmed)
        return NULL;

    // Copy the trimmed part of s1 to the new string
    size_t i;
    for (i = 0; start < end; start++, i++)
        trimmed[i] = s1[start];
    trimmed[i] = '\0';

    return trimmed;
}

#include <stdio.h>

int main(void)
{
    char str[] = "azasd az hamza dazoa az az";
    char *trimmed = ft_strtrim(str, "aze");
    
    if (trimmed)
    {
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);  // Remember to free the allocated memory
    }

    return 0;
}
