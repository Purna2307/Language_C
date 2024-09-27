//
//  main.c
//  TP4bis
//
//  Created by Purna  on 25/09/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include "PileTSEnt.h"

int main(void) {
    Pile p;
    creerPile(&p);
    
    printf("Pile vide : %d\n", pileVide(p));

    empiler(&p, 1);
    empiler(&p, 2);
    empiler(&p, 3);
    
    affiche(p.tab, p.nb);
    
    depiler(&p);
    
    affiche(p.tab, p.nb);
    
    empiler(&p, 12);
    
    affiche(p.tab, p.nb);
    
    printf("Pile vide : %d\n", pileVide(p));
    printf("Le dernier est : %d\n", sommet(p));

    return EXIT_SUCCESS;
}

