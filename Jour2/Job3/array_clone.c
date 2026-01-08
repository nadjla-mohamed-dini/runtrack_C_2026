#include <stdlib.h>

void my_strcpy(char *dest, const char *src);
char **array_clone(char **arr, int n)
{
    char **clone;
    int i = 0;

    if (!arr || n <= 0)
        return NULL;

    clone = malloc((n + 1) * sizeof(char *));
    if (!clone)
        return NULL;

    while (i < n && arr[i] != NULL) {
        int len = _mbstrlen(arr[i]);
        clone[i] = malloc((len + 1) * sizeof(char));
        if (!clone[i])
            return NULL;  

        my_strcpy(clone[i], arr[i]);
        i++;
    }

    clone[i] = NULL;  
    return clone;
}