/*
exercice 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    printf("Entrer un nombre\n");
    scanf("%d",&n);
    k=n;
  for(n=1;n<=k;k--)
printf("%d\n",k);
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,a;
    printf("Entrer un nombre:\n");
    scanf("%d",&n);
    a=1;
    for (k=1;k<=n;k++)
    {
        a=a*k;

    }
     printf("%d!=%d",n,a);
    return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,k;
    printf("Entrer n1:\n");
    scanf("%d",&n1);
    printf("Entrer n2:\n");
    scanf("%d",&n2);
    if (n1<n2)
    {
        for (k=n1; k<=n2; k++);
        {
            if (k%2==0)
            {
                printf("%d\n",k);
            }
        }

    }
    else
    {
        printf("Il faut que n1<n2\n");
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer un nombre:\n");
    scanf("%d",&n);
}
