#include <stdio.h>

int my_atoi(char *str);

int main()
{
    printf("%d\n", my_atoi(" -1234"));
    printf("%d\n", my_atoi("42"));
    printf("%d\n", my_atoi("+987"));
}