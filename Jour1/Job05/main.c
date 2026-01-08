#include <stdio.h>
#include <stdlib.h>

char *my_strdup(const char *src);

int main(void)
{
    char *copy = my_strdup("Salut les gars!");

    if (copy)
        printf("Copie = %s\n", copy);
    else
        printf("Erreur d'allocation\n");

    free(copy);
    return 0;
}
