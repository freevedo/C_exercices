#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float q;
    printf("ce programme permet de calculer a/b\n");
    printf("Entrer une valeur pour a:\n");
    scanf("%d",&a);
    printf("Entrer une valeur pour b:\n");
    scanf("%d",&b);
    q=a/b;
    printf("Le resultat est %.3f",q);
    return 0;
}
