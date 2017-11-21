#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;

	if (!s2 || !s2[0])
		return ((char *)s1);
    i = 0;
    j = 0;
	while (s1[i] && s2[j] && i < n)
	{
		while (s1[i] == s2[j] && i < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i - j]);
			i++;
			j++;
		}
		i = i - j + 1;
		j = 0;
	}
	return (NULL);
}