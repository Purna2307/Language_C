//
//  point.c
//  Exercice 2
//
//  Created by Purna  on 11/09/2024.
//

#include "point.h"
#include <math.h>

float distanceOrigine(point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}
