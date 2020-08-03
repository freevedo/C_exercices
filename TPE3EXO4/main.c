#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,d;
    do
    {
        printf("donnez un entier  superieur à 2:\n");
        scanf("%d",&n);
    }
    while (n<=2);
    d=2;
    while ((n%d)&&(d<=sqrt(n)))d++;
    if (n%d)
    {
        printf("%d est premier",n);
    }
    else
    {
        printf("%d n'est pas premier\n",n);
    }
    return 0;
}
