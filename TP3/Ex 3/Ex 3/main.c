//
//  main.c
//  Ex 3
//
//  Created by Purna  on 18/09/2024.
//

 


#include <stdio.h>

int fibo(int x, int tab[]);

int main(int argc, const char *argv[]) {
    int n;
    
    printf("Entrez le nombre de termes : \n");
    scanf("%d", &n);
    
    int tab[n];
    for (int i = 0; i < n; i++) {
        tab[i] = -1;
    }
    
    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibo(i, tab));
    }
    printf("\n");
    
    return 0;
}

int fibo(int x, int tab[]) {
    if (x == 0) {
        return 0;
    } else if (x == 1) {
        return 1;
    }
    
    if (tab[x] != -1) {
        return tab[x];
    }
    
    tab[x] = fibo(x - 1, tab) + fibo(x - 2, tab);
    return tab[x];
}

 
