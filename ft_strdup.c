#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *dest;

    dest = 0;
    if(!(dest = ft_strnew(ft_strlen(s))))
        return(NULL);
    ft_strcpy(dest, s);
    return(dest);
}
