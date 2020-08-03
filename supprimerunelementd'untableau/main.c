#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t[50],a,n;
    printf("Supprimer un element\n");
    printf("Donner la dimension du tableau\n");
    scanf("%d",&n);
    printf("Remplissez le tableau\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
    }
    system(cls);
    for (i=0; i<n; i++)
    {
        printf("|%d|\t",t[i]);
    }
    printf("Quel est l'element a supprimer\n");
    scanf("%d",&a);
    for (i=0; i<n; i++)
    {
        n=n-1;
        if (a==t[i])
         t[i]=t[i+1];

    }
    for (i=0; i<n; i++)
    {
       printf("|%d|\t",t[i]);
    }

    return 0;
}
