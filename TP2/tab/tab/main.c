//
//  main.c
//  tab
//
//  Created by Purna  on 17/09/2024.
//

#include <stdio.h>

#define MAX 100

// Fonction de remplissage du tableau par saisie
void remplirTableau(float tab[], int *n) {
    printf("Entrez le nombre d'éléments (max %d): ", MAX);
    scanf("%d", n);
    if (*n > MAX) {
        printf("Nombre d'éléments trop grand !\n");
        *n = MAX;
    }
    for (int i = 0; i < *n; i++) {
        printf("Entrez l'élément %d: ", i + 1);
        scanf("%f", &tab[i]);
    }
}

// Fonction d'affichage du tableau
void afficherTableau(float tab[], int n) {
    printf("Tableau: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", tab[i]);
    }
    printf("\n");
}

// Fonction pour calculer la somme des éléments du tableau
float sommeTableau(float tab[], int n) {
    float somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tab[i];
    }
    return somme;
}

// Fonction pour calculer le produit des éléments du tableau
float produitTableau(float tab[], int n) {
    float produit = 1;
    for (int i = 0; i < n; i++) {
        produit *= tab[i];
    }
    return produit;
}

// Fonction pour trouver l'indice de la valeur minimale dans le tableau
int indiceMin(float tab[], int n) {
    int indice_min = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] < tab[indice_min]) {
            indice_min = i;
        }
    }
    return indice_min;
}

// Fonction pour trouver la valeur maximale dans le tableau
float valeurMax(float tab[], int n) {
    float max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

// Recherche séquentielle
int rechercheSeq(float tab[], int n, float valeur) {
    for (int i = 0; i < n; i++) {
        if (tab[i] == valeur) {
            return i; 
        }
    }
    return -1;
}

// Recherche dichotomique
int rechercheDicho(float tab[], int n, float valeur) {
    int gauche = 0, droite = n - 1;
    while (gauche <= droite) {
        int milieu = (gauche + droite) / 2;
        if (tab[milieu] == valeur) {
            return milieu;
        } else if (tab[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }
    return -1;
}

// Tri par sélection-échange
void triSelection(float tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (tab[j] < tab[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            float temp = tab[i];
            tab[i] = tab[minIndex];
            tab[minIndex] = temp;
        }
    }
}

// Tri par insertion
void triInsertion(float tab[], int n) {
    for (int i = 1; i < n; i++) {
        float key = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = key;
    }
}

// Tri à bulles
void triBulles(float tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                float temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    float tableau[MAX];
    int n;

    // Remplissage et affichage du tableau
    remplirTableau(tableau, &n);
    afficherTableau(tableau, n);

    printf("Somme des éléments: %.2f\n", sommeTableau(tableau, n));
    printf("Produit des éléments: %.2f\n", produitTableau(tableau, n));
    printf("Indice de la valeur minimale: %d\n", indiceMin(tableau, n));
    printf("Valeur maximale: %.2f\n", valeurMax(tableau, n));

    // Recherche séquentielle et dichotomique
    float valeur;
    printf("Entrez une valeur à rechercher: ");
    scanf("%f", &valeur);
    int indice = rechercheSeq(tableau, n, valeur);
    if (indice != -1) {
        printf("Valeur trouvée à l'indice %d (recherche séquentielle)\n", indice);
    } else {
        printf("Valeur non trouvée (recherche séquentielle)\n");
    }

    // Tri et recherche dichotomique
    triSelection(tableau, n);
    printf("Tableau trié par sélection: ");
    afficherTableau(tableau, n);
    indice = rechercheDicho(tableau, n, valeur);
    if (indice != -1) {
        printf("Valeur trouvée à l'indice %d (recherche dichotomique)\n", indice);
    } else {
        printf("Valeur non trouvée (recherche dichotomique)\n");
    }

    return 0;
}
