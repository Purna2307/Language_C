//
//  main.c
//  Pointeur
//
//  Created by Purna  on 15/09/2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int variable = 10;
    
    printf("La valeur de la variable est %d\n", variable);
    printf("L'addresse de la variable est %p\n",&variable);
    
    int *pointeur;
    pointeur = &variable;
    
    printf("La valeur du pointeur est %p\n", pointeur);
    printf("La valeur contenue dans le pointeur est %d\n",*pointeur);
    
    return 0;
}
