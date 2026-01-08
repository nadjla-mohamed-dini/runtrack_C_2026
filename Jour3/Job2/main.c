#include <stdlib.h>
#include <stdio.h>

char *my_itoa(int n);

int main()
{
    char *s1 = my_itoa(12345);
    char *s2 = my_itoa(-42);
    char *s3 = my_itoa(0);

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    free(s1);
    free(s2);
    free(s3);
}