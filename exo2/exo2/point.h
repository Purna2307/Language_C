//
//  point.h
//  exo2
//
//  Created by Purna  on 17/09/2024.
//

#ifndef POINT_H
#define POINT_H

typedef struct {
    float x;
    float y;
} Point;

void init_point(Point *p, float x, float y);
float distance_to_origin(const Point *p);

#endif // POINT_H
