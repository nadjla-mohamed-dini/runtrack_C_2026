#include <stdio.h>

int my_strcmp(const char *s1, const char *s2);

int main(void)
{
    printf("%d\n", my_strcmp("abc", "abc"));  
    printf("%d\n", my_strcmp("abc", "abd"));   
    printf("%d\n", my_strcmp("abd", "abc"));   

    return 0;
}
