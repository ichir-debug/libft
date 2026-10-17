#include "libft.h"

char	*ft_strdup(const char *s)
{
    size_t i;
    size_t len;
    char* copy;

    len = ft_strlen(s) + 1;
    copy = (char*)malloc(len * sizeof(char));
    if(!copy)
        return NULL;
    i = 0;
    while(s[i])
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}