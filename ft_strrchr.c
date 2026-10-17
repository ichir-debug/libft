#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int i;
    int j;
    char* str;

    str = (char*)s;
    i = 0;
    j = -1;
    while(str[i])
    {
        if(str[i] == c)
        {
            j = i;
        }
        i++;
    }
    
    if(str[i] == c)
        return (&str[i]);

    if(j != -1)
        return (&str[j]);

    return NULL;
}