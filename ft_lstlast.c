#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *current;

    if(lst == NULL)
        return 0;

    current = lst;
    while(current->next != NULL)
        current = current->next;

    return current;
}