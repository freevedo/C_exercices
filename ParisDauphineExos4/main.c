#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Ce programme permet de determiner si un nombre entier est premier ou pas!!\n");
    printf("Entrer un nombre :\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Le nombre est pair\n");
    }
    else
     {
         printf("Le nombre est impair!\n");
     }
     return 0;
}
