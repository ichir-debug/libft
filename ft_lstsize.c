#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    t_list *current;
    unsigned int i;

    if(lst == NULL)
        return 0;

    i = 1;
    current = lst;
    while(current->next != NULL)
    {
        current->next = current->next->next;
        i++;
    }
    return i;
}