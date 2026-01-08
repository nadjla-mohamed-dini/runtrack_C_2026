#include <stdio.h>

void swap (int *a, int *b);

int main(void)
{
    int x = 11;
    int y = 42;

    swap(&x, &y);

    printf("x = %d, y = %d\n", x,y);

    return 0;
}