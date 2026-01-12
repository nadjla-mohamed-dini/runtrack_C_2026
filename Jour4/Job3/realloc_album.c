#include <stdlib.h>
#include "print_album.h"

album *realloc_albym(album *old, int old_size, int new_size)
{
    int i;
    album *new_tab;

    if (new_size <= 0)
    {
        free(old);
        return NULL;

    }

    new_tab = malloc(sizeof(album) * new_size);
    if (!new_tab)
        return NULL;

    for (i =0; i < old_size && i < new_size; i++)
        new_tab[i] = old[i];
    free(old);
    return new_tab;
}
