/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irichi <irichi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 02:08:07 by irichi            #+#    #+#             */
/*   Updated: 2026/10/18 02:19:37 by irichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*current;
	unsigned int	i;

	if (lst == NULL)
		return (0);
	i = 1;
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

// #include<stdio.h>
// int main()
// {
//     t_list *lst1;
//     lst1 = ft_lstnew("123");
//     t_list *lst2;
//     lst2 = ft_lstnew("234");
//     t_list *lst3;
//     lst3 = ft_lstnew("345");
//     t_list *lst4;
//     lst4 = ft_lstnew("456");
//     lst1->next = lst2;
//     lst2->next = lst3;
//     lst3->next = lst4;
//     printf("%d\n", ft_lstsize(lst1));
// }