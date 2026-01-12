#include "manhattan.h"

int manhattan(point a, point b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;

    return ABS(dx) + ABS(dy);
}