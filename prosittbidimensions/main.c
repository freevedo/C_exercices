#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,k,menu,a,Tprincipale[50][50],som[50],Tprixuni[50],total,T[50];
    float Tprix[50];

    printf("Entrer les  dimensions du tableau:\n");
    printf("Donner le nbre de rayons:\n");
    scanf("%d",&n);
    printf("Donner le nbre de produits:\n");
    scanf("%d",&m);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("\nentrer le nombre de produit  %d au rayon %d\t",j, i);
            scanf("%d",&Tprincipale[i][j]);
        }

    }
    printf("\n");
    printf("-----Menu-----\n");
    printf("2.Mettre a jour la quantite d'un produit donne dans un rayon donne\n" );
    printf("3.Calcul et afficher la quantite totale de chaque produit\n");
    printf("4.Saisir le prix unitaire de chhaque produit\n");
    printf("5.Calculer le prix total des produits\n");
    printf("6.Supprimer du tableau des prix totaux toutes les cases ayant un prix egale à zero.\n");
    printf("Quel est votre choix\n");
    scanf("%d",&menu);
    switch(menu)
    {
    case 2:
        printf("Mettre a jour un element donne\n");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                printf("%7d",Tprincipale[i][j]);
            }
            printf("\n");

        }
        printf("Quel sont les indices de l'element a modifier\n");
        //scanf("%d, %d",&i,&j);
        scanf("%d",&i);
        scanf("%d",&j);

        printf("Donner la nouvelle valeur\n");
        scanf("%d",&a);
        Tprincipale[i][j]=a;

        for (i=1; i<=n; i++)
        {
            for (j=1; j<=m; j++)
            {
                printf("%7d",Tprincipale[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        printf("Le total de chaque produit \n");
        for (j=1; j<=m; j++)
        {
            total=0;
            for (i=1; i<=n; i++)
            {
                total=total+Tprincipale[i][j];
            }
            T[j]=total;
        }
        for (j=1; j<=m; j++)
        {
            printf("%7d",T[j]);
        }
        printf("\n");
        break;
    case 4:
        printf("saisir le prix unitaire de chaque produit\n");
        for(j=1; j<=m; j++)
        {
            printf("entrer le prix du produit %d\n",j);
            scanf("%d",&Tprixuni[j]);
        }
        for (j=1; j<=m; j++)
        {
            printf("%7d",Tprixuni[j]);
        }
        printf("\n");
        break;
    case 5:

        printf("Prix total de chaque produit\n");
        for (j=1; j<=m; j++)
        {
            total=0;
            for (i=1; i<=n; i++)
            {
                total=total+Tprincipale[i][j];
            }
            T[j]=total;
        }
        for(j=1; j<=m; j++)
        {
            printf("entrer le prix unitaire du produit %d\n",j);
            scanf("%d",&Tprixuni[j]);
        }
        for (j=1; j<=m; j++)
        {
            Tprix[j]=T[j]*Tprixuni[j];
        }
        for (j=1; j<=m; j++)
        {
            printf("%7f",Tprix[j]);
        }
        printf("\n");
        break;
    }

    return 0;
}
