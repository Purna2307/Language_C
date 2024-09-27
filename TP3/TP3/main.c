//
//  main.c
//  TP3
//
//  Created by Purna  on 18/09/2024.
//

#include <stdio.h>

int somme1(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return 1 + somme1(a, b - 1);
    }
}

int somme2(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return somme2(a+1, b - 1);
    }
}

int main(int argc, char *argv[]) {
    int a, b;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);

    int result = somme1(a, b);
    printf("Le resultat de la somme1(%d, %d) est: %d\n", a, b, result);
    
    int result2 = somme2(a, b);
    printf("Le resultat de la somme2 (%d, %d) est: %d\n", a, b, result2);

    return 0;
}
