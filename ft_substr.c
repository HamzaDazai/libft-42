
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ds;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	i = 0;
	if (len > s_len - start)
		len = s_len - start;
	ds = (char *)malloc((len + 1) * sizeof(char));
	if (ds == NULL)
		return (NULL);
	while (i < len)
	{
		ds[i] = s[start + i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}
