#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

    src_len = 0;
	while (src[src_len])
    {
		src_len++;
    }

	i = 0;
	while (i < size && dest[i])
	{
        i++;
    }

	dest_len = i;
	if (dest_len == size)
	{
        return (size + src_len);
    }

	j = 0;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest_len + src_len);
}