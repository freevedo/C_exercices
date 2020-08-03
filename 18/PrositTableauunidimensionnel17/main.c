#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,thum[15],Ttemp[15],n,m,somhum=0,a,c,somtemp,maxhum,minhum,menu;
    float moyhum,moytemp,ecarttype;
    printf("======Systeme d'irrigation======\n");
    printf("\n");
    do
    {
        printf("Donner le nombre de mesures de temperatures:\n");
        scanf("%d",&n);
    }
    while(n<1||n>15);
    for (i=0; i<n; i++)
    {
        printf("--Entrer les donnees de temperature:\n");
        scanf("%d",&Ttemp[i]);
    }
    printf("\t");
    do
    {
        printf("Donner le nombre de mesures d'humidite:\n");
        scanf("%d",&m);
    }
    while(m<1||m>15);
    for (i=0; i<m; i++)
    {
        printf("--Entrer les donnees d'humidite:\n");
        scanf("%d",&thum[i]);
        printf("|%d|\t",thum[i]);
    }
    do
    {
        printf("\n");
        printf("===Menu===\n");
        printf("\n");
        printf("1.Afficher les mesures de temperature.\n");
        printf("2.Afficher les mesures d'humidite.\n");
        printf("3.Modifier la valeur d'une prise\n");
        printf("4.Calculer et afficher l'humidite max et min\n");
        printf("5.Calculer et afficher la moyenne  d'humidite et de temperature\n");
        printf("6.Calculer l'ecart type de l'humidite\n");
        printf("7. Supprimer la 1ere occurence d'une temperature donnee par l'user\n");
        printf("8.Supprimer la derniere occurence\n");
        printf("9.Supprimer toutes les occurences\n");
        printf("0.Quitter\n");
        printf("\n");
        printf("Quel est votre choix?\n");
        scanf("%d",&menu);

    switch(menu)
    {
    case 1:
        printf("Les mesures de temperature sont:\n");
        for(i=0; i<n; i++)
        {
            printf("|%d|\t",Ttemp[i]);
        }
        break;
    case 2:
        printf("Les mesures d'humidite sont:\n");
        for (i=0; i<m; i++)
        {
            printf("|%d|\t",thum[i]);
        }
        break;
    case 3:
        printf("Quelle est l'indice de la valeur a modifier\n");
        for (i=0; i<m; i++)
        {
            scanf("%d",&i);
            printf("entrer la nouvelle valeur:\n");
            scanf("%d",&c);
            thum[i]=c;
            printf("|%d|\t",thum[i]);

        }

        break;
    case 4:
        maxhum=thum[0];
        minhum=thum[0];
        for (i=0; i<m; i++)
        {
            if (maxhum<thum[i])
            {
                maxhum=thum[i];
            }
            if (minhum>thum[i])
            {
                minhum=thum[i];
            }

        }
        printf("--Humidite maximale--:%d\n",maxhum);
        printf("--Humidite minimale--:%d\n",minhum);

        break;
    case 5:

        for (somhum=0,i=0; i<m; i++)
        {
            somhum+=thum[i];
            moyhum=somhum/m;
        }
        printf("la moyenne d'humidite est :%f\n",moyhum);
        for (somtemp=0,i=0; i<n; i++)
        {
            somtemp+=Ttemp[i];
            moytemp=somtemp/n;
        }
        printf("La moyenne de temperature est %f\n",moytemp);
        break;
    case 6:
        for (somhum=0,i=0; i<m; i++)
        {
            somhum+=thum[i];
            moyhum=somhum/m;
            a=(thum[i]-moyhum);a++;

        }
printf("%d\n",a);
        ecarttype=sqrt((a*a)/m);
        printf("L'ecart type est :%f",ecarttype);
        break;
    case 7:
        for (i=0; i<n; i++)
        {
            printf("%d",thum[i]);
        }
        for (i=0,j=0; i<n; i++)
        {
            thum[j]=thum[i];
            if (thum[i]) j++;
        }
        n=j;
        printf("Tableau resultat:\n");
        for (i=0; i<n; i++)
        {
            printf("%d",thum[i]);
        }
        break;
    case 0:
        printf("Au revoir\n");
        break;
    default :
        printf("NON PRIS EN CHARGE\n");

    }
    }
    while (menu!=0);

    return 0;
}
