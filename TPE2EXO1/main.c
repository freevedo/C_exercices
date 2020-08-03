#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Ce programme permet d'attribuer des mentions \n");
    printf("Entrer la moyenne de l'eleve!\n");
    scanf("%d",&a);
    if (a<10)
    {
        printf("Redouble!\n");
    }
    if (a>10&&a<12)
    {
        printf("Passable");
    }
    if (a>=12&&a<14)
    {
        printf("Assez bien\n");
    }
    if (a>=14&&a<=16)
    {
        printf("bien\n");
    }
    if (a>16)
    {
        printf("Tres bien\n");
    }
    return 0;
}
