//
//  main.c
//  Structure
//
//  Created by Purna  on 17/09/2024.
//

#include <stdio.h>

struct Personne
{
    char nom[100];
    char prenom[100];
    int age;
};

int main(int argc, const char * argv[]) {
    struct Personne personne;
    
    printf("Quel est votre nom ? : ");
    scanf("%s", personne.nom);
    printf("Quel est votre prénom ? : ");
    scanf("%s", personne.prenom);
    printf("Quel est votre age ? : ");
    scanf("%d", &personne.age);
    
    printf("Nom : %s\n", personne.nom);
    printf("Prenom : %s\n", personne.prenom);
    printf("Age : %d\n", personne.age);

    return 0;
}
