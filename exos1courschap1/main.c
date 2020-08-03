#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,g;
    printf("Ce programme permet de calculer une moyenne de 2 matières\n");
    printf("Note de la 1ere matiere:\n");
    scanf("%f",&a);
    printf("Entrer son coefficient\n");
    scanf("%f",&c);
    printf("Note de la 2eme matiere : \n");
    scanf("%f",&b);
    printf("Entrer son coefficient\n");
    scanf("%f",&d);
    e=a*c;
    f=c*b;
    g=(f+e)/(c+d);
    printf("La moyenne est %f", g);
    return 0;
}
