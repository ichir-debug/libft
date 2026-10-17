#include "libft.h"

static int	ft_is_set(char const s_char, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s_char)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	end;
	size_t	len;
	char	*result;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;

	end = len;
	while (end > i && ft_is_set(s1[end - 1], set))
		end--;

	len = end - i;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);

	j = 0;
	while (i < end)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}