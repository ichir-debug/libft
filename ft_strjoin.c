#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    size_t i;
    size_t j;
    char* result;

    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    result = (char*)malloc(len * sizeof(char));
    if(!result)
        return NULL;
    i = 0;
    j = 0;
    while(s1[j])
    {
        result[i] = s1[j];
        i++;
        j++;
    }
    j = 0;
    while (s2[j])
    {
        result[i] = s2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return result;
}