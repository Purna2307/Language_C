//
//  main.c
//  Exercice 2
//
//  Created by Purna  on 11/09/2024.
//

#include "tab_point.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    tableau_points tab;
    int indice1, indice2;

    srand(time(NULL));

    remplirTableau(&tab);
    afficherTableau(&tab);

    float min_distance = plusPetiteDistance(&tab);
    printf("La plus petite distance à l'origine: %.2f\n", min_distance);

    pointsPlusEloignes(&tab, &indice1, &indice2);
    printf("Les deux points les plus éloignés sont %d et %d\n", indice1, indice2);

    triDistanceCroissante(&tab);
    printf("Tableau trié par distance croissante à l'origine:\n");
    afficherTableau(&tab);

    return 0;
}
