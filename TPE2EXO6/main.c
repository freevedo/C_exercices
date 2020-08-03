#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,d,b,c,som=0;
    float a;
    printf("Ce programme permet entre autre de faire la somme des chiffres d'un nombre\n");
    printf("Entrer un nombre compris entre 100 et 999\n");
    scanf("%d",&n);

    if (n<100||n>999)
    {

        printf("Erreur Ce n'est pas un nombre indique\n");
    }

    else if(som%2==0)
    {
        c=n/100;
        b=(n/10)%10;
        d=n%10;
        som=d+b+c;
        printf("Le nombre donne est :%d\n",n);
        printf("La somme des chiffres est %d\n",som);
        a=som*som;
        printf("On fait le carre: %.2f\n",a);
    }
    else if(som%2!=0)
    {
        a=sqrt(som);
        printf("On fait la racine carre: %.2f",a);
    }
    return 0;
}
