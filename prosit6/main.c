#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j=0,n,choix,compteur,tab1[35]={2,8,1,4,11,9,17,5,18,19,3,12,15,7,10,20,6,13,14,16},tab2[35];
    char phrase[100],mot[50],car[20];
    printf("Bonjour\n");
    printf("1.Afficher le nombre de mot d'une phrase\n");
    printf("2.Afficher les voyelles et leur nombre dans un mot\n");
    printf("3.Construire une phrase\n");
    printf("0.Quitter\n");
    printf("Quel est vore choix:");
    scanf("%d",&choix);
    switch(choix)
    {
    case 1:
        printf("Entrer une phrase:\n");
        fflush(stdin);
        gets(phrase);
        compteur=strlen(phrase);
        for (i=0; i<compteur; i++)
        {
            if (phrase[i]== ' ' )
            {
                for (k=0;k<)
                j++;
            }
        }
        printf("Il y a %d mot(s) dans la phrase\n",j+1);
        break;
    case 2:
        printf("Entrer une chaine de caractere\n");
        scanf("%s",mot);
        n=strlen(mot);
        j=0;
        for (i=0;mot[i];i++)
        {
            j=1;
            if (strchr("aeuioyAEUIOY",mot[i]))
            {
            printf("%c\t",mot[i]);
            j++;
            }

        }
        printf("Il ya %d voyelles dans le mot %s\n",j,mot);
        break;
    /*case 3:
        printf("Voici les mots mal ordonne:\n");
        printf("au:1; binta:2;rencontrer:3;marche:4;condiments:5;papa:6;alex:7;va:8;acheter:9;que:10;pour:11;son:12;n':13;aime:14;amoureux:15;pas:16;des:17;et:18;a:19;son:20\n");
        printf("Donner l'ordre exact pour faire une phrase correct\n");
        for(i=0;i<20;i++)
        {
            scanf("%d",&tab2[i]);
        }
            if (tab1[i]==tab2[i])
            {
                printf("C'est correct.\nLa phrase est:\nbinta va au marche pour acheter des condiments et a rencontrer son amoureux Alex que son papa n'aime pas.\n");
            }
            else
            {
                printf("Ce n'est pas l'ordre exact\n");
            }*/

    }
    return 0;
}
