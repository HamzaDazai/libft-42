/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdazia <hdazia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 04:23:37 by hdazia            #+#    #+#             */
/*   Updated: 2024/11/04 13:17:31 by hdazia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
static char	ft_print_strings(char *str, char *s, int j , int word_len)
{
	int	i;

	i = 0;
	while(word_len > 0)
	{
		str[i] = s[j - word_len];
		i++;
		word_len--;
	}
	str[j] = '\0';
	return (str); 
}
static char	**ft_split_string(char const *s, char c, char **s1, int c_words)
{
    int	j;
    int	word;
    int	word_len;

	j = 0;
    word = 0;
    word_len = 0;
	while(word < c_words)
	{
		while(s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		s1[word] = (char *)malloc((word_len +1)*(sizeof (char )));
		if (!s1)
			return (free_array(s1, word));
		ft_print_strings(s1[word],s, j, c_words);
		word_len = 0;
		word++;
	}
	s1[word] = 0;
	return (s1);
}

//conter words
static int	ft_contur_w(char  *s, char ch)
{
	int	i;
	int	c_word;
	
	i = 0;
	c_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch )
			i++;
		else
		{
			c_word++;
			while (s[i] != '\0' && s[i] != ch)
				i++;
		}
	}
	return (c_word);
}
// the origenal fonction
char **ft_split(char const *s, char c)
{
	char	**s1;
	unsigned int	c_words;

	if (!s)
		return (NULL);
	c_words = ft_contur_w(s,c);
	s1 = (char **)malloc((c_words + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	s1 = ft_split_string(s,c,*s1,c_words);
	return (s1);
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