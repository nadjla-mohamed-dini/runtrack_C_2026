#ifndef ALBUM_H
#define ALBUM_H

typedef struct album {
    char *title;
    char *artiste;
    int year;
} album;

void print_album(album *a);

#endif