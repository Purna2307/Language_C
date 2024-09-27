//
//  PileTSEnt.c
//  TP4bis
//
//  Created by Purna  on 25/09/2024.
//

#include "PileTSEnt.h"
#include <stdio.h>
#include <stdlib.h>

void creerPile(Pile* p) {
    p->nb = 0;
}

_Bool pileVide(Pile p) {
    return p.nb == 0;
}

void empiler(Pile* p, Element e) {
    if (p->nb < MAX) {
        p->tab[p->nb] = e;
        p->nb++;
    } else {
        printf("Erreur:La pile est pleine\n");
    return exit(EXIT_FAILURE);
    }
}

void depiler(Pile* p){
    if (!pileVide(*p)) {
        p->nb--;
    } else {
        printf("Erreur : la pile est vide.\n");
        return exit(EXIT_FAILURE);
    }
}

Element sommet(Pile p) {
    if (!pileVide(p)) {
        return p.tab[p.nb - 1];
    } else {
        printf("Erreur: La pile est vide.\n");
        exit(EXIT_FAILURE);
    }
}


void affiche(int tab[], int nb) {
    for (int i = 0; i < nb; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
