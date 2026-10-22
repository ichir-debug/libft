/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irichi <irichi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:21:15 by irichi            #+#    #+#             */
/*   Updated: 2026/10/18 16:21:15 by irichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	ft_count_digit(long n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	num;
	char	*result;

	num = n;
	len = ft_count_digit(num);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
		num = -num;
	while (len--)
	{
		result[len] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

// int main()
// {
//     long long n = -9223372036854775807 -1;
//     printf("%lld\n", n);
//     printf("%s\n", ft_itoa((int)-75849));
//     printf("%s\n", ft_itoa((int)75849));
//     printf("%s\n", ft_itoa((int)-0));
//     printf("%s\n", ft_itoa((int)0));
//     printf("%s\n", ft_itoa((int)-2147483648));
//     printf("%s\n", ft_itoa((int)2147483647));
//     printf("%s\n", ft_itoa((int)9223372036854775807));
//     printf("%s\n", ft_itoa((int)n));
//     return 0;
// }