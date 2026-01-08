#include <stdio.h>
#include <stdlib.h>

char **split(const char *str);

int main(void)
{
    char **tab = split("   hello   have   a   good   day ");
    int i = 0;

    while (tab[i] != NULL) {
        printf("mot[%d] = '%s'\n", i, tab[i]);
        free(tab[i]);
        i++;
    }
    free(tab);

    return 0;
}

#include <stdlib.h>

int my_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

