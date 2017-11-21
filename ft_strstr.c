#include "libft.h"

char    *ft_strstr(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s1[i] && s2[j])
    {
        while(s1[i] == s2[j])
        {
            if(!s2[j + 1])
                return((char *)&s1[i - j]);
            i++;
            j++;
        }
        i = i - j + 1;
        j = 0;
    }
    return(NULL);
}
