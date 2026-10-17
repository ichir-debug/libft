#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *current;

    if(lst != NULL)
    {
        current = ft_lstlast(*lst);
        current->next = new;
    }
    else
    {
        lst = &new;
    }
}