#include "libft.h"

size_t    ft_strlcat(char *dest, const char *src, size_t n)
{
    int i;
    size_t j;

    i = 0;
    j = 0;
    while(dest[i])
    {
        if(dest[i + 1] == '\0')
        {
            dest[i + 1] = src[j];
            j++;
        }
        i++;
        return(ft_strlen(dest) + j);
    }
    return(ft_strlen(dest) + n);
}
