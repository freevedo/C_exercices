#include <stdio.h>
#include <stdlib.h>
/*exercice1
int main()
{
    int i,j,n,m,T[50][50],som;
    printf("Donnez les dimensions du tableau:\n");
    printf("Lignes:");
    scanf("%d",&n);
    printf("Colonnes:");
    scanf("%d",&m);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            scanf("%d",&T[i][j]);
        }
    }
    printf("Tableau donne:\n");
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            printf("%7d",T[i][j]);
        }
        printf("\n");
    }
      for (som=0,i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            som+=T[i][j];
        }
        printf("\n");
    }
    printf("La somme des termes du tableau est:%d\n",som);

    return 0;
}
*/
/*Exercice2
int main ()
{
    int i,j,n,m,T[50][50];
    printf("Programme unique pour des matrices carres cad lignes=colonnes\n");
    do
    {
        printf("Lignes");
        scanf("%d",&n);
        printf("Colonnes");
        scanf("%d",&m);
    }
    while(n!=m);
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d",&T[i][j]);
        }
    }
    printf("Matrice donne\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%7d",T[i][j]);
        }
        printf("\n");
    }
    printf("Matrice diagonale\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (i==j)
            {
                T[i][j]=0;
            }
            printf("%7d",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*exercice3
int main ()
{
    int i,j,k,l,n,m,M1[50][50],M2[50][50],som[50][50];
    printf("Les dimensions des Matrices:\n");
    printf("Lignes:\n");
    scanf("%d",&n);
    printf("Colonnes:\n");
    scanf("%d",&m);
    printf("Remplissez la 1ere matrice\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&M1[i][j]);
        }
    }
    printf("M1\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%7d",M1[i][j]);
        }
        printf("\n");
    }
     printf("Remplissez la 2e matrice\n");
    for(k=0;k<n;k++)
    {
        for(l=0;l<m;l++)
        {
            scanf("%d",&M2[k][l]);
        }
    }
     printf("M2\n");
    for(k=0;k<n;k++)
    {
        for(l=0;l<m;l++)
        {
            printf("%7d",M2[k][l]);
        }
        printf("\n");
    }
    for(i=0,k=0;k<n&&i<n;k++,i++)
    {
        for(j=0,l=0;l<m&&j<m;l++,j++)
        {
            som[i][j]=(M1[i][j]+M2[k][l]);
        }
    }
    printf("La matrice somme est:\n");
      for(i=0,k=0;k<n&&i<n;k++,i++)
    {
        for(j=0,l=0;l<m&&j<m;l++,j++)
        {
            printf("%7d",som[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*exrcice4
int main ()
{
    int i,j,n,M[50][50];
    printf("Dimension\n");
    scanf("%d",&n);
    printf("Remplir la matrice\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&M[i][j]);
        }
    }
    printf("Matrice donnee\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%7d",M[i][j]);
        }
        printf("\n");
    }
    printf("Les elements de la digonale\n");
    for (i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i==j)
            printf("%d",M[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}*/
int main ()
{
    int
    return 0;
}
