

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size_s;

	size_s = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[size_s]);
	while (size_s > 0)
	{
		size_s--;
		if (s[size_s] == (char)c)
			return ((char *)&s[size_s]);
	}
	if (s[size_s] == (char)c)
		return ((char *)&s[size_s]);
	return (NULL);
}
