#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=1,t[n];
    float moy;
    printf("Entrer la taille du tableau:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        moy=  t[i]+moy;
    }
     for(i=0;i<n;i++)
     {
         printf("%d\t",t[i]);
     }
     printf("\n");
    moy=moy/n;
    printf("La moyenne est :%.2f",moy);


    return 0;
}
