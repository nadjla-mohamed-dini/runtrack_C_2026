int char_is_digit(char c);

int str_is_digit(const char *str)
{
    int i = 0;

    if (!str || str [0] == '\0')
    return 0;

    while (str [i] != '\0') {
        if (!char_is_digit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

#include <stdio.h>
#include <stdlib.h>

char *trim(const char *str);

int main(void)
{
    char *res = trim("   \t hello world \n  ");
    printf("'%s'\n", res);
    free(res);

    return 0;
}
