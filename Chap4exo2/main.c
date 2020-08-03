#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=14,i,occ=1;
    char  t[]= {'A','B','C','D','A','S','D','B','C','A','B','C','D','E'},a;
    printf("Entrer un caractere\n");
    scanf("%c",&a);
    getchar();
    for (i=1; i<n; i++)
    {
        t[i]=t[i+1];
        if (t[i]==a)
        {
            occ++;
        }
    }
    printf("Le nombre d'occurrences de %c est %d",a,occ);
    return 0;
}
