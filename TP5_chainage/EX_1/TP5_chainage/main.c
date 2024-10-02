//
//  main.c
//  TP5_chainage
//
//  Created by Purna  on 02/10/2024.
//

#include <stdio.h>
#include <stdlib.h>


struct maillon{int val;struct maillon* svt;};
typedef struct maillon maillon;


int main(int argc, const char * argv[]) {
    
    maillon* p = (maillon*)malloc(sizeof(maillon));
    p->val = 1;
    p->svt = (maillon*)malloc(sizeof(maillon));
    p->svt->val = 2;
    p->svt->svt = (maillon*)malloc(sizeof(maillon));
    p->svt->svt->val = 3;
    p->svt->svt->svt = NULL;
    
    maillon* temp = p;
    while (temp != NULL) {
    printf("L'adresse : %p, Valeur : %d\n", temp, temp->val);
    temp = temp->svt;
    }
    
    /* printf("adresse 1 : %p / valeur 1\n", p,p*/
    
    if (p == NULL) {
        printf("Échec de l'allocation\n");
        return EXIT_FAILURE;
    }

    free(p->svt->svt->svt);
    free(p->svt->svt);
    free(p->svt);
    free(p);
    
    while (temp != NULL) {
    printf("L'adresse : %p, Valeur : %d\n", temp, temp->val);
    temp = temp->svt;
    }
    
    return EXIT_SUCCESS;
}



