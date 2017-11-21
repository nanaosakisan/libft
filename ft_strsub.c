#include "libft.h"
#include <stdio.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *dest;

	dest = 0;
	if (!s)
		return (NULL);
	if (!(dest = ft_strnew(len)))
		return (NULL);
	ft_strncpy(dest,(s + start), (len));
	return (dest);
}
