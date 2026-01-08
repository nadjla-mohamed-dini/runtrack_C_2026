#include <stdio.h>
#include <stdlib.h>

char *trim(const char *str);

int main(void)
{
    char *res = trim("   \t hello guys \n  ");
    printf("'%s'\n", res);
    free(res);

    return 0;
}