#include <stdio.h>

int power(int n, int power);

int main(void)
{
    printf("11^42= %d\n", power(11, 42));
    printf("5^0= %d\n", power (5, 0));
    printf("(-6)^16= %d\n", power(-6, 16));

    return 0;
}