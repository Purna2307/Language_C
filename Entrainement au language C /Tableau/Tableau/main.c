//
//  main.c
//  Tableau
//
//  Created by Purna  on 15/09/2024.
//

#include <stdio.h>

/*int main(int argc, const char * argv[]) {
    
 float tableaux[4];
     tableaux[0] = 10;
     tableaux[1] = 11;
     tableaux[2] = 12;
     tableaux[3] = 13;
     
     
     printf("Case 1 : %f\n", tableaux[0]);
     printf("Case 2 : %f\n", tableaux[1]);
     printf("Case 3 : %f\n", tableaux[2]);
     printf("Case 4 : %f\n", tableaux[3]);
     return 0;
     }
     */
    void nombresPairs(int *tab, int taille)
    {
        for (int i=0; i<4; i++)
        {
            if (tab[i] % 2 == 0)
            {
                printf("Le nombre %d est pair\n", tab[i]);
            }
        }
    }

    int main(int argc, const char * argv[]) {
        int tab[4] = {12,23,34,45};
        nombresPairs(tab,4);
    
    
    return 0;
}
