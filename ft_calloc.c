#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    size_t total;
    void* str;

    total = nmemb * size;
    str = (char*)malloc(total);
    if(!str)
        return NULL;
    ft_bzero(str, total);
    return str;
}
