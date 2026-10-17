#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    char* h_str;

    h_str = (char*)haystack;
    if(needle[0] == '\0')
        return (h_str);

    i = 0;
    while(h_str[i] && i < len)
    {
        j = 0;
        while(i + j < len && h_str[i + j] == needle[j])
        {
            j++;
            if(needle[j] == '\0')
            {
                return (&h_str[i]);
            }
        }
        i++;
    }

    return (NULL);
}