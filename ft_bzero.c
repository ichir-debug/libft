/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irichi <irichi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 22:34:33 by irichi            #+#    #+#             */
/*   Updated: 2026/10/17 22:34:33 by irichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include<stdio.h>
// #include<strings.h>
// int main()
// {
//     int lol1 = 6574982;
//     int* ptr1 = &lol1;
//     ft_bzero(NULL, 2);
//     printf("%d\n", lol1);

//     int lol2 = 6574982;
//     int* ptr2 = &lol2;
//     bzero(NULL, 2);
//     printf("%d\n", lol2);
// }