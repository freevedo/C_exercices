#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,j,i,T[50][50],max[50][50],min[50][50],compteur,A;
    printf("Donner les dimensions la matrice voulue:\n");
    printf("Les lignes:\n");
    scanf("%d",&n);
    printf("Les colonnes:\n");
    scanf("%d",&m);
    printf("remplissez la matrice\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Donnez l'element : %d %d \t",i+1,j+1);
            scanf("%d",&T[i][j]);
        }
        printf("\n");
    }
    printf("La matrice est:\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%7d",T[i][j]);
        }
        printf("\n");
    }

    //fin de la 1ere partie initialisation et affichage du tableau


    for (i=0; i<n; i++)
    {
        A=T[i][1];
        for(j=0; j<m; j++)
        {
            if(T[i][j]>A)
            {
                A=T[i][j];
            }
        }
        for (j=0; j<m; j++)
        {
            if (A==T[i][j])
            {
                max[i][j]=1;
            }

            else
            {
                max[i][j]=0;
            }

        }
    }
    for (j=0; j<m; j++)
    {
        A=T[1][j];
        for(i=0; i<n; i++)
        {
            if(T[i][j]<A)
            {
                A=T[i][j];
            }
        }
        for (i=0; i<n; i++)
        {
            if (A==T[i][j])
            {
                min[i][j]=1;
            }

            else
            {
                min[i][j]=0;
            }

        }
    }
    printf("Les points cols sont:\n");
    for (compteur=1,i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (max[i][j]&&min[i][j])
            {
                  compteur++;
               printf("L'element %d est un max sur la ligne %d et un min sur la colonne %d\n",T[i][j],i+1,j+1);

            }

        }

    }

    if (compteur==0)
        printf("Le tableau ne contient pas de points cols\n");
    return 0;
}
