//
//  main.c
//  Ex1_2
//
//  Created by Purna  on 02/10/2024.
//

#include <stdio.h>
#include <stdlib.h>


struct maillon{int val;struct maillon* svt;};
typedef struct maillon maillon;


int main(int argc, const char * argv[]) {
    
    maillon* premier = (maillon*)malloc(sizeof(maillon));
    maillon* deuxieme = (maillon*)malloc(sizeof(maillon));
    maillon* troisieme = (maillon*)malloc(sizeof(maillon));
    
    premier->val = 1;
    premier->svt = deuxieme;

    deuxieme->val = 3;
    deuxieme->svt = troisieme;

    troisieme->val = 2;
    troisieme->svt = NULL;


    premier->svt = troisieme;
    free(deuxieme);

    maillon* temp = premier;
    while (temp != NULL) {
        printf("Adresse : %p, Valeur : %d\n", temp, temp->val);
        temp = temp->svt;
    }
    
    return EXIT_SUCCESS;
}





