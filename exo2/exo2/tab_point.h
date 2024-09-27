//
//  tab_point.h
//  exo2
//
//  Created by Purna  on 17/09/2024.
//

#ifndef TAB_POINT_H
#define TAB_POINT_H

#include "point.h"

#define MAX 1000

typedef struct {
    Point points[MAX];
    int size;
} TabPoint;

void init_tab(TabPoint *tab);
void fill_tab_random(TabPoint *tab);
void print_tab(const TabPoint *tab);
float min_distance_to_origin(const TabPoint *tab);
void farthest_points(const TabPoint *tab, int *index1, int *index2);
void sort_by_distance(TabPoint *tab);

#endif // TAB_POINT_H
