//
//  PileTSEnt.h
//  TP4bis
//
//  Created by Purna  on 25/09/2024.
//

#include <stdio.h>

#ifndef PileTSEnt_h
#define PileTSEnt_h
#define MAX 5


typedef int Element;

typedef struct {
    Element tab[MAX];
    int nb;
} Pile;

void creerPile(Pile* p);
_Bool pileVide(Pile p);
void empiler(Pile* p, Element e);       
void depiler(Pile* p);
Element sommet(Pile p);

void affiche(int tab[], int nb);
#endif
