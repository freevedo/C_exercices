#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter le nombre de candidats\n");
    scanf("%f",&a);
    printf("Le nombre de candidats est %.0f\n",a);
    printf("Enter le nombre de candidats presents\n");
    scanf("%f",&b);
    printf("Le nombre de candidats est %.0f\n",a);
    c=b/a*100;
    printf("Le pourcentage des candidats presents est %.2f %%",c);

    return 0;
}
