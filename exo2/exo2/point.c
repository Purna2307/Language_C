//
//  point.c
//  exo2
//
//  Created by Purna  on 17/09/2024.
//

#include "point.h"
#include <math.h>

void init_point(Point *p, float x, float y) {
    p->x = x;
    p->y = y;
}

float distance_to_origin(const Point *p) {
    return sqrt(p->x * p->x + p->y * p->y);
}
