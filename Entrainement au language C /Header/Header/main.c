//
//  main.c
//  Header
//
//  Created by Purna  on 15/09/2024.
//

#include <stdio.h>
#include "aire.h"

int main(int argc, const char * argv[]) {
    double resultat;
    
    resultat = airRectangle (10.0, 20.0);
    
    printf("L'aire du rectangle est %f\n", resultat);
    return 0;
}
