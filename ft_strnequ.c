#include "libft.h"

int     ft_strnequ(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i <= n)
    {
        if(s1[i] != s2[i])
            return (0);
        i++;
        return (1);
    }
    return (0);
}
