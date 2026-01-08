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

char *my_strdup(const char *src)
{
    char *copy;
    int len;

    if (!src)
        return NULL;

    len = my_strlen(src);
    copy = malloc((len + 1) * sizeof(char));
    if (!copy)
        return NULL;

    my_strcpy(copy, src);
    return copy;
}
