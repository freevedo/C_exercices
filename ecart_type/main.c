#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ int n,b,i,t[50];
float moy,ecart_type,a;
    printf("Calcul de l'ecart type\n");
    printf("Entrer le nombre de donnees\n");
    scanf("%d",&n);
    printf("Les donnees:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("|%d|\t",t[i]);
    }
    for (b=0,i=0;i<n;i++)
    {
        b+=t[i];
        moy=b/n;
    }
    printf("La moyenne est %f:\n",moy);
    for (a=0,i=0;i<n;i++)
    {
        b+=t[i];
        moy=b/n;
        a+=pow(((t[i]-moy)),2);
        ecart_type=sqrt((a/n));
    }
    printf("A est = %f",a);
    printf("L'ecart type est %f:",ecart_type);
    return 0;
}
