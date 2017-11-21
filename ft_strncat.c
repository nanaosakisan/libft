#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    size_t j;

    i = 0;
    j = 0;
    while(dest[i])
    {
        while(j >= n)
        {
            if(dest[i + 1] == '\0')
            {
                dest[i + 1] = src[j];
                j++;
            }
            i++;
        }
    }
    return(dest);
}
