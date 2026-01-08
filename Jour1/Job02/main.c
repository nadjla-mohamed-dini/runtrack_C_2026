#include <stdio.h>

int my_strlen(char *str);

int main()
{
    int len = my_strlen("Hello");
    printf("Taille = %d\n", len); 
    return 0;
}
