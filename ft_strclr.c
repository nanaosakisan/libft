#include "libft.h"

void     ft_strclr(char *s)
{
    int size;

    size = 0;
    size = ft_strlen(s);
    while(size >= 0)
    {
        s[size] = '\0';
        size--;
    }
}
