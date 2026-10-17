#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char* str;
    char* result; 
    size_t len;

    str = (char*)s;
    len = ft_strlen(s);
    result = malloc((len + 1)*sizeof(char));
    if(!result)
        return NULL;
    i = 0;
    while(str[i])
    {
        result[i] = f(i, str[i]);
        if(result[i] == '\0')
            return result;
        i++;
    }

    return result;
}