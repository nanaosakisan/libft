#include "libft.h"

char    *ft_strnew(size_t size)
{
    char *str;

    str = 0;
    if(!(str = (char *)malloc(size + 1)))
        return(NULL);
    ft_bzero(str, size + 1);
    return(str);
}
