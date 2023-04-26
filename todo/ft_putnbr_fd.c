#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    *strnb;

    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if (n < 0)
    {
	    ft_putchar_fd('-');
        n = -n;
    }
    strnb=ft_itoa(n);
    ft_putstr_fd(strnb);
    return ;
}
