#include <stdio.h>

void divide(int *nbr);

int main(void)
{
    int x = 42;

    divide(&x);
    printf("x = %d\n", x);  

    return 0;
}
