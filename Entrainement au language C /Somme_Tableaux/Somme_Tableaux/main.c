//
//  main.c
//  Somme_Tableaux
//
//  Created by Purna  on 15/09/2024.
//

#include <stdio.h>

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)
    {
        somme += tableau[i];
    }
    return (double)somme/(double)tailleTableau;
}

int main(int argc, const char * argv[]) {
    int tab[4] = {1, 2, 3, 4};
    int tailleTableau = 4;

    int somme = sommeTableau(tab, tailleTableau);
    double moyenne = moyenneTableau(tab, tailleTableau);

    printf("La somme du tableau est: %d\n", somme);
    printf("La moyenne du tableau est: %.2f\n", moyenne);

    return 0;
}
