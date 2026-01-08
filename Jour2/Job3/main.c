#include <stdio.h>
#include <stdlib.h>

char **array_clone(char **arr, int n);

int main(void)
{
    char *tab[] = {"hello", "bayern", "test", NULL};
    char **copy = array_clone(tab, 5);

    int i = 0;
    while (copy[i] != NULL) {
        printf("copy[%d] = %s\n", i, copy[i]);
        free(copy[i]);
        i++;
    }
    free(copy);

    return 0;
}
