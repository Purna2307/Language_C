//
//  main.c
//  Ex 2
//
//  Created by Purna  on 18/09/2024.
//


#include <stdio.h>
#include <stdlib.h>

double puissance(int x, int n) {
    if (n == 0)
        return 1;
    else {
        return x * puissance(x, n - 1);
    }
}

double puissance2_accumulateur(int x, int n, double accumulateur) {
    if (n == 0)
        return accumulateur;
    else {
        return puissance2_accumulateur(x, n - 1, accumulateur * x);
    }
}

double puissance3_indienne(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        return puissance3_indienne(x * x, n / 2);
    } else {
        return x * puissance3_indienne(x * x, (n - 1) / 2);
        }
}


double puissance2(int x, int n) {
    return puissance2_accumulateur(x, n, 1);
}

int main(int argc, const char *argv[]) {
    int x, n;

    printf("Choisissez votre valeur x et sa puissance : ");
    scanf("%d %d", &x, &n);

    double res1 = puissance(x, n);
    printf("Le résultat de puissance(%d, %d) est: %lf\n", x, n, res1);

    double res2 = puissance2(x, n);
    printf("Le résultat de puissance2(%d, %d) est: %lf\n", x, n, res2);
    
    double res3 = puissance3_indienne(x, n);
    printf("Le résultat de puissance2(%d, %d) est: %lf\n", x, n, res3);

    return 0;
}
