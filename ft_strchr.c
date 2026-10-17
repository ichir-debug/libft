#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    int i;
    char *ptr;
    ptr = (char*)s;

    i = 0;
    while(ptr[i])
    {
        if(ptr[i] == c)
        {
            return &ptr[i];
        }
        i++;
    }
    
    if(ptr[i] == c)
    {
        return &ptr[i];
    }

    return NULL;
}