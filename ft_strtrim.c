/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irichi <irichi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:04:57 by irichi            #+#    #+#             */
/*   Updated: 2026/10/19 21:04:57 by irichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	end = len;
	while (end > i && ft_is_set(s1[end - 1], set))
		end--;
	len = end - i;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	j = 0;
	while (i < end)
		result[j++] = s1[i++];
	result[j] = '\0';
	return (result);
}
