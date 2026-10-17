#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const char *ptr1;
    const char *ptr2;

    ptr1 = (const char*)s1;
    ptr2 = (const char*)s2;

    i = 0;
    while(i < n)
    {
        if(ptr1[i] != ptr2[i])
        {
            return (unsigned char)ptr1[i] - (unsigned char)ptr2[i];
        }
        i++;
    }

    return 0;
}