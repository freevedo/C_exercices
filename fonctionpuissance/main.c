#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int     a,b;
    float puiss=0;
    printf("Fonction puissance!\n");
    printf("Entrer le nobre dont vous voulez la puissance:\n");
    scanf("%d",&a);
    printf("Entrer la puissance:\n");
    scanf("%d",&b);
    puiss=pow(a,b);
    printf("La puissance de %d est %f",a,puiss);
    return 0;
}
