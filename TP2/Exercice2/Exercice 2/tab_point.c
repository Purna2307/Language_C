//
//  tab_point.c
//  Exercice 2
//
//  Created by Purna  on 11/09/2024.
//

#include "tab_point.h"
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void remplirTableau(tableau_points *tab) {
    tab->taille = MAX;
    for (int i = 0; i < tab->taille; i++) {
        tab->points[i].x = -3.1 + ((float)rand() / RAND_MAX) * (5 - (-3.1));
        tab->points[i].y = -3.1 + ((float)rand() / RAND_MAX) * (5 - (-3.1));
    }
}

void afficherTableau(const tableau_points *tab) {
    for (int i = 0; i < tab->taille; i++) {
        printf("Point %d: (%.2f, %.2f)\n", i, tab->points[i].x, tab->points[i].y);
    }
}

float plusPetiteDistance(const tableau_points *tab) {
    float min_distance = FLT_MAX;
    for (int i = 0; i < tab->taille; i++) {
        float distance = distanceOrigine(tab->points[i]);
        if (distance < min_distance) {
            min_distance = distance;
        }
    }
    return min_distance;
}

void pointsPlusEloignes(const tableau_points *tab, int *indice1, int *indice2) {
    float max_distance = 0.0;
    for (int i = 0; i < tab->taille; i++) {
        for (int j = i + 1; j < tab->taille; j++) {
            float distance = sqrt(pow(tab->points[i].x - tab->points[j].x, 2) + pow(tab->points[i].y - tab->points[j].y, 2));
            if (distance > max_distance) {
                max_distance = distance;
                *indice1 = i;
                *indice2 = j;
            }
        }
    }
}

void triDistanceCroissante(tableau_points *tab) {
    for (int i = 0; i < tab->taille - 1; i++) {
        for (int j = i + 1; j < tab->taille; j++) {
            if (distanceOrigine(tab->points[i]) > distanceOrigine(tab->points[j])) {
                point temp = tab->points[i];
                tab->points[i] = tab->points[j];
                tab->points[j] = temp;
            }
        }
    }
}
