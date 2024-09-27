//
//  main.c
//  TP4
//
//  Created by Purna  on 25/09/2024.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct maillon  {
               int v;
               struct maillon* suiv;
            }Maillon;
 
typedef Maillon* Pile;

Pile Remplir (void)
{
    int n,i;
    Pile A;
    A=pilenouv();
 
    printf("Entrez le nombre d\'anneaux : ");
    scanf("%d",&n);
 
    for (i=1;i<=n;i++)
    {
        A=empiler(A,i);
    }
 
    return A;
}
void Hanoi (Pile A, Pile B, Pile C, int n)
{
    if (n==1)
    {
        C=empiler(C,tete(A));
        A=depiler(A);
    }
 
    else
    {
        Hanoi (A,C,B,n-1);
 
        B=empiler(B,tete(A));
        A=depiler(A);
 
        Hanoi (B,A,C,n-1);
    }
}

int main (void)
{
 
    Pile A,B,C;
 
    A=Remplir();
    B=pilenouv();
    C=pilenouv();
 
    Hanoi(A,B,C,longueur(A));
 
    return 0;
 
}

Pile pilenouv (void)
{
    return NULL;
}
 
Pile empiler (Pile p, int data)
{
    Pile sauv=p;
 
    p=(Pile)malloc(sizeof(Maillon));
    if (p==NULL) {printf("Erreur d\'allocation memoire ... !\n");exit(1);}
 
    p->v=data;
    p->suiv=sauv;
 
    return p;
}
 
Pile depiler (Pile p)
{
    Pile tete=p;
 
    if (vide(p)) {printf("On ne peut depiler une pile vide ... \n");exit(1);}
 
    p=p->suiv;
    free(tete);
    return p;
}
 
int longueur (Pile p)
{
    int l=0;
 
    while (p!=NULL)
    {
        p=p->suiv;
        ++l;
    }
 
    return l;
}




























