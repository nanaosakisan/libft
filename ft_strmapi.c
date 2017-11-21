#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char        *str;
    unsigned int i;

    str = 0;
    i = 0;
    if(!(str = (char *)ft_strnew(ft_strlen(s))))
        return(NULL);
    while(s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    return(str);
}
