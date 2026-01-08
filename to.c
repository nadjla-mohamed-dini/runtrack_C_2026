#include <stdio.h>
#include "is.c"

char to_lower(char c) {
    if (is_upper(c)) {
        return c + ('a' - 'A');
    }
    return c;
}

int main (void) {
    printf("%c ", to_lower('z'));
    printf("%c ", to_lower('%'));


    //printf("%c ", to_upper('n'));
    //printf("%c ", to_upper('N'));

    //printf("%c ", to_switch('x'));
    //printf("%c ", to_switch('X'));
}