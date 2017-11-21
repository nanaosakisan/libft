#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *tmp;

    tmp = 0;
    if(!(tmp = (malloc(size))))
        return(NULL);
    ft_bzero(tmp, size);
    return (tmp);
}
