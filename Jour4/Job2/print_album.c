#include <stdio.h>
#include "print_album.h"

void print_album(album *a){
    if (!a)
        return;
    
        printf("\"%s\" by \"%s\" released in %d. \n", a->artiste, a->title, a->year);
} 