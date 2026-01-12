#include <stdio.h>
#include"manhattan.h"

int main(void)
{
    point p1 = {3, 5};
    point p2 = {1, 1};

    printf("Distance Manhattan = %d\n", manhattan(p1, p2)); 

    return 0;
}