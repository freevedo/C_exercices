#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct depot
{
    int id;
    char typproduit[50];
    char nom[50];
    char ville[50];
    int quanproduit[200];
    int nbr;
} depot;
int main()
{
    depot dep[100];
    int i,j,n,menu,max,a,b;
    char aide[50];
    printf("Entrer le nombre de depots\n");
    scanf("%d",&n);
    //remplissage
    for (i=0; i<n; i++)
    {

        printf("Quel est l'id du depot\n");
        scanf("%d",&dep[i].id);
        printf("Quel est le type de produit:(vestimentaires,alimentaires,pieces de rechanges)\n");
        scanf("%s",dep[i].typproduit);
        //pour optimiser le programme faire une boucle tant que cest diff de vestimentaires.....
        fflush(stdin);
        printf("Quel est le responsble du depot:\n");
        gets(dep[i].nom);
        do
        {
            printf("Quelle est la localite: TUNIS,SOUSSE\n");
            scanf("%s",dep[i].ville);
            a=strcmp(dep[i].ville,"TUNIS");
            b=strcmp(dep[i].ville,"SOUSSE");
        }
        while (a!=0&&b!=0);
        printf("Enter le nombre de rayons: \n");
        scanf("%d",&dep[i].nbr);
    }
    //affichage
    for (i=0; i<n; i++)
    {
        printf("ID Depot %d : %d\n",i+1,dep[i].id);
        printf("Type de produit : \n");
        puts(dep[i].typproduit);
        printf("Nom du responsable :\n ");
        puts(dep[i].nom);
        printf("Localite : %s\n",dep[i].ville);
        printf("nombre rayons : %d",dep[i].nbr);
        /* for (j=0; j<dep[i].nbr; j++)
         {
             printf("Rayon : %d quantite : %d",j+1, dep[j].quanproduit);
         }*/

    }
    printf("-----------Menu---------\n");
    printf("1.Ajouter un nouveau depot\n");
    printf("2. Quantite des produits a stocker\n");
    printf("3.Lister un depot\n");
    printf("4.Afficher le nom du responsable et la localite\n");
    printf("5.Modifier le nom d'un responsable\n");
    printf("6.Nombre de depots situer a une adresse specifique/n");
    printf("7.Afficher les depots dont le nombre de produits dans chaque rayon ne depasse pas max\n");
    printf("8.Supprimer le premier depot vide\n");
    printf("Choisir:");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        n++;
        printf("Quel est l'id du depot\n");
        scanf("%d",&dep[i].id);
        printf("Quel est le type de produit:(vestimentaires,alimentaires,pieces de rechanges)\n");
        fflush(stdin);
        gets(dep[i].typproduit);//pour optimiser le programme faire une boucle tant que cest diff de vestimentaires.....
        printf("Quel est le responsble du depot:\n");
        gets(dep[i].nom);
        do
        {
            printf("Quelle est la localite: TUNIS,SOUSSE\n");
            gets(dep[i].ville);
            a=strcmp(dep[i].ville,"TUNIS");
            b=strcmp(dep[i].ville,"SOUSSE");
        }

        while (a!=1&&b!=1);
        printf("Quel est le nombre de rayons:\n");
        scanf("%d",&dep[n].nbr);
        //affichage
        for (i=0; i<n; i++)
        {
            printf("ID Depot %d : %d",i+1,dep[i].id);
            printf("Type de produit : \n");
            puts(dep[i].typproduit);
            printf("Nom du responsable : \n");
            puts(dep[i].nom);
            printf("Localite : %s\n",dep[i].ville);
            printf("Le nombre de rayons du depot %d : %d\n",i+1,dep[i].nbr);
            //copier le dernier tableau dans le tableau de strucutre
        }
        break;
    case 2 :
        printf("Entrer l ' ID du rayon:\n");
        scanf("%d",&a);
        if (a==dep[i].id)
        {
            printf("Quelle est la quantite a stoque dans le 1er rayon \n");
            scanf("%d",&b);
            // dep[i].quanproduit=b;
        }
    case 3:
        printf("Donner le type de produit\n");
        fflush(stdin);
        gets(aide);
        i=0;
        do
        {
        a=strcmp(dep[i].typproduit,aide);
        if (a==0)
        {
                printf("ID Depot %d : %d\n",i+1,dep[i].id);
                printf("Type de produit : \n");
                puts(dep[i].typproduit);
                printf("Nom du responsable :\n ");
                puts(dep[i].nom);
                printf("Localite : %s\n",dep[i].ville);
                printf("nombre rayons : %d",dep[i].nbr);
        }
        i++;
        }while ((a!=0)||( i!=n));

    }

    return 0;
}
