#include <stdio.h>
#include "libft.h"

static size_t ft_count_digit(long n)
{
    size_t count;

    if(n == 0)
    {
        count = 1;
        return count;
    }

    count = 0;
    if(n < 0)
    {
        count++;
    }
    while(n > 0)
    {
        count++;
        n = n/10;
    }

    printf("%ld\n", count);

    return count;
}

char *ft_itoa(int n)
{
    size_t i;
    size_t len;
    char *result;

    if(n == -2147483648)
    {
        return "-2147483648";
    }

    len = ft_count_digit(n) + 1;
    result = malloc(len * sizeof(char));
    if(!result)
        return NULL;

    if(n < 0)
        result[0] = '-';
    
    i = len - 2;

    printf("i = %ld\n", i);
    printf("len = %ld\n", len);

    while(n > 0)
    {
        result[i] = (n % 10) + '0';
        printf("%c\n", result[i]);
        n = n / 10;
        i++;
    }
    result[len - 1] = '\0';

    return result;
}


int main()
{
    printf("%s", ft_itoa(50));

    return 0;
}