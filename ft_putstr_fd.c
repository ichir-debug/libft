#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    unsigned int i;

    if(fd >= 0 && fd <= 2)
    {
        i = 0;
        while(s[i])
        {
            ft_putchar_fd(s[i], fd);
            i++;
        }
    }

    return;
}