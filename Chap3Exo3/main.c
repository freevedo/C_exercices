#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=1,t[n];
    printf("Donner la taille du tableau\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
    }
    return 0;
}
