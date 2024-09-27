//
//  tab_point.h
//  Exercice 2
//
//  Created by Purna  on 11/09/2024.
//

#ifndef TAB_POINT_H
#define TAB_POINT_H

#include "point.h"
#define MAX 1000

typedef struct {
    point points[MAX];
    int taille;
} tableau_points;

void remplirTableau(tableau_points *tab);
void afficherTableau(const tableau_points *tab);
float plusPetiteDistance(const tableau_points *tab);
void pointsPlusEloignes(const tableau_points *tab, int *indice1, int *indice2);
void triDistanceCroissante(tableau_points *tab);

#endif
