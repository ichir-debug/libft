/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irichi <irichi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 02:38:52 by irichi            #+#    #+#             */
/*   Updated: 2026/10/18 03:44:03 by irichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

// #include<stdio.h>
// void ft_topper(void *n)
// {
//     int *nb = (int*)n;
// 
//     *nb = *nb + 1;
// }
// 
// int main()
// {
//     int n1 = 1;
//     int n2 = 2;
//     int n3 = 3;
//     int n4 = 4;
// 
//     t_list *lst1 = ft_lstnew(&n1);
//     t_list *lst2 = ft_lstnew(&n2);
//     t_list *lst3 = ft_lstnew(&n3);
//     t_list *lst4 = ft_lstnew(&n4);
// 
//     lst1->next = lst2;
//     lst2->next = lst3;
//     lst3->next = lst4;
// 
//     ft_lstiter(lst1, &ft_topper);
// 
//     printf("lst1 content: %d\n", *(int *)(lst1->content));
//     printf("lst2 content: %d\n", *(int *)(lst2->content));
//     printf("lst3 content: %d\n", *(int *)(lst3->content));
//     printf("lst4 content: %d\n", *(int *)(lst4->content));
// }