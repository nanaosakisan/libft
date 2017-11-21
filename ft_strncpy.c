#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while(i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return(dest);
}
