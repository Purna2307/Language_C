//
//  princ.c
//  exo2
//
//  Created by Purna  on 17/09/2024.
//

#include "tab_point.h"
#include <stdio.h>

int main() {
    TabPoint tab;
    init_tab(&tab);
    fill_tab_random(&tab);

    print_tab(&tab);

    printf("Minimum distance to origin: %.2f\n", min_distance_to_origin(&tab));

    int index1, index2;
    farthest_points(&tab, &index1, &index2);
    printf("Farthest points are at indices %d and %d\n", index1, index2);

    sort_by_distance(&tab);
    printf("Points sorted by distance to origin:\n");
    print_tab(&tab);

    return 0;
}
