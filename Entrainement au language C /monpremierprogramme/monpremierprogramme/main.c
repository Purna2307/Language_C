//
//  main.c
//  monpremierprogramme
//
//  Created by Purna  on 14/09/2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombre;
    
    printf("=== Menu== \n, 1.Royal Cheese\n, 2.Mc deluxe\n, 3.Mc Bacon\n, 4.Big Mac\n ");
    printf("Votre choix ?");
    scanf("%d", &nombre);

    switch (nombre) {
        case 1:
            printf("Voici votre Royal Cheese \n");
            break;
        case 2:
            printf("Voici votre Mc deluxe \n");
            break;
        case 3:
            printf("Voici votre Mc Bacon \n");
            break;
        case 4:
            printf("Voici votre Big Mac \n");
            break;
            
        default:
            printf("Vous avez rien choisi \n");
            break;
    }
    
  return 0;
}
