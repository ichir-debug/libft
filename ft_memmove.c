/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irichi <irichi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:39:47 by irichi            #+#    #+#             */
/*   Updated: 2026/10/18 17:39:47 by irichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)dest;
	ptr2 = (const unsigned char *)src;
	if (ptr1 < ptr2)
	{
		i = 0;
		while (i < n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptr1[i] = ptr2[i];
		}
	}
	return (dest);
}
