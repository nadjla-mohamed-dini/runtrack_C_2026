#include <stdlib.h>

static int int_len(int n)
{
    int len = 0;

    if (n <= 0)
        len++;
    
        while (n != 0)
        {
            n/= 10;
            len++;
        }
        return len;
}

char *my_itoa(int n)
{
    int len = int_len(n);
    char *str = malloc(sizeof(char) * (len +1));
    long nb = n;
    int i = len -1;

    if (!str)
        return NULL;
    
        str[len] = '\0';

    if (nb < 0)
    {
        str[0] ='-';
        nb = -nb;
    }

    while (nb > 0)
    {
        str[i] = (nb % 10) + '0';
        nb /=10;
        i--;
    }
    return str;
}