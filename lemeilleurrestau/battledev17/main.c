#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i,n,t[3],moy,som,max;
    do
    {
        printf("Enter the number of restaurants:\n");
        scanf("%d",&n);

    printf("Enter the quality of:\n");

        printf("Give the restaurant notes\n");
        for (som=0,i=0; i<4; i++)
        {
            scanf("%d",&t[i]);
            som+=t[i];
            moy=som/3;
        }
        printf("La moyenne est:%d\n",moy);

    }while(i<n,(n<3||n>500));
    for (som=0,i=0;i<3;i++)
    {
        max= (som+=t[0]/3);
        if (max<(som+=t[i]/3))
        {
            printf("Le restqurqnt %d a eu la meilleure note %d",i,max);
        }
    }
    return 0;
}
