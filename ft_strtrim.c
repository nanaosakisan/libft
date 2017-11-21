#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char			*dest;
	size_t			len;

	if (!s)
		return (NULL);
	len = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	len = ft_strlen(s) - 1;
	while(s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	len += 1;
 	return (!(dest = ft_strsub(s, 0, len))) ? NULL : dest;
}
