#include "libft.h"

char    *ft_strmap(const char *s, char (*f)(char))
{
    char *str;
    int i;

    str = 0;
    i = 0;
    if(!(str = (char *)ft_strnew(ft_strlen(s))))
        return(NULL);
    while(s[i])
    {
        str[i] = (*f)(s[i]);
        i++;
    }
    return(str);
}
