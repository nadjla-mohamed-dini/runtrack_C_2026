#include <stdio.h>

char *my_strcpy(char *dest, const char *src);

int main(void)
{
    char dest[50];

    my_strcpy(dest, "Bonjour !");
    printf("dest = %s\n", dest);

    return 0;
}
