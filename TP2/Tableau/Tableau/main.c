//
//  main.c
//  Tableau
//
//  Created by Purna  on 11/09/2024.
//

#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}
    
int main(void) {
    int tab[100];
    int y;

    
    printf("Tu veux combien de valeur (max 100) ? ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++) {
        printf("Entrez la valeur pour la case %d : ", i);
        scanf("%d", &tab[i]);
    }

    int somme = sommeTableau(tab, y);

    
    printf("Les éléments du tableau sont :\n");
    for (int i = 0; i < y; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    
    printf("La somme des éléments : %d\n", somme);

    return EXIT_SUCCESS;
}

// afft(tab,nb) --> void afft (double table, size-t)
