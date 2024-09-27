//
//  tab_point.c
//  exo2
//
//  Created by Purna  on 17/09/2024.
//

#include "tab_point.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void init_tab(TabPoint *tab) {
    tab->size = 0;
}

void fill_tab_random(TabPoint *tab) {
    srand(time(NULL));
    for (int i = 0; i < MAX; i++) {
        tab->points[i].x = -3.1 + ((float)rand() / RAND_MAX) * (5 + 3.1);
        tab->points[i].y = -3.1 + ((float)rand() / RAND_MAX) * (5 + 3.1);
    }
    tab->size = MAX;
}

void print_tab(const TabPoint *tab) {
    for (int i = 0; i < tab->size; i++) {
        printf("Point %d: (%.2f, %.2f)\n", i, tab->points[i].x, tab->points[i].y);
    }
}

float min_distance_to_origin(const TabPoint *tab) {
    float min_distance = distance_to_origin(&tab->points[0]);
    for (int i = 1; i < tab->size; i++) {
        float dist = distance_to_origin(&tab->points[i]);
        if (dist < min_distance) {
            min_distance = dist;
        }
    }
    return min_distance;
}

void farthest_points(const TabPoint *tab, int *index1, int *index2) {
    float max_distance = 0;
    for (int i = 0; i < tab->size; i++) {
        for (int j = i + 1; j < tab->size; j++) {
            float dist = distance_to_origin(&tab->points[i]) + distance_to_origin(&tab->points[j]);
            if (dist > max_distance) {
                max_distance = dist;
                *index1 = i;
                *index2 = j;
            }
        }
    }
}

void sort_by_distance(TabPoint *tab) {
    // Simple bubble sort
    for (int i = 0; i < tab->size - 1; i++) {
        for (int j = 0; j < tab->size - i - 1; j++) {
            if (distance_to_origin(&tab->points[j]) > distance_to_origin(&tab->points[j + 1])) {
                Point temp = tab->points[j];
                tab->points[j] = tab->points[j + 1];
                tab->points[j + 1] = temp;
            }
        }
    }
}
