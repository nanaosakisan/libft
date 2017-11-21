#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;

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
    }
    return(dest);
}
