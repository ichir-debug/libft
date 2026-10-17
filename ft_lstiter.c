#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *current;
    if(!lst || !f)
        return;

    current = lst;
    while(current->next)
    {
        f(current);
        current = current->next;
    }
}