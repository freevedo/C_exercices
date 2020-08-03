#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j;
 
    system ("cls");   // Efface la console
 
 
    for (i = 0 ; i < n+1 ; i++)     // Affiche les lignes du tableau
    {
        for (j = 0 ; j < m+1; j++)  // Affiche les colonnes du tableau
        {
            tableau [0][j]=j;
            tableau [i][0]=i;
            printf("%d",tableau [i][j]);
        }
        printf("\n");
    }
 return 0;
}

