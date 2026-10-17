#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(fd >= 0 && fd <= 2)
        ft_putstr_fd(ft_itoa(n), fd);

    return;
}