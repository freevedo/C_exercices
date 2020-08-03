#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max,min,t[50];//initialiser les tableaux avec une valeur maximale;

    do
    {
        printf("Donner la taille du tableau\n");
        scanf("%d",&n);
    }
    while(n<=0&&n>50);

    for (i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
    }
    min=t[0];
    max=t[0];
    for (i=0; i<n; i++)
    {
        if (min>t[i])
        {
            min=t[i];
        }
        if (max<t[i])
        {
            max=t[i];
        }

    }
    printf("Le plus grand ecart est: %d",max-min);
    return 0;
}
