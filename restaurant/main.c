#include <stdio.h>
#include <stdlib.h>
#include"restaurant.h"
int main()
{


    int t[3];
    int i,som=0;
    int j=0;
    int moyen[500];
    int moy=0;
    int n;
    do
    {
        printf("Enter the number of restaurants:\n");
        scanf("%d",&n);
    }
    while(n<5||n>500);
    printf("Give the restaurant notes:\n");
    do
    {
        printf("enter restaurant mark of resto number %d\n ",n);
        for(i=0; i<3; i++)
        {
            scanf("%d",&t[i]);
            som+=t[i];
        }

        moy=som/3;
        printf("moyenne->:%d",moy);
        moyen[j]=moy;
        j++;
        n--;
    }
    while(n>0);

    return 0;
}

