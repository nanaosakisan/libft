#include "libft.h"

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    if(n >= 0 && n <= 9)
        ft_putchar(n % 10 + 48);
    else if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + 48);
    }
}
