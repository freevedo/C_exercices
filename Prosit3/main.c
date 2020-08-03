#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b,niveau,compteur_tentatives,var_aleatoire,max,min=1;
    char car_aleatoire;
    printf("--Bienvenue au jeu du mystere--");
    printf("--Veuillez choisir un niveau--\n");
    printf("--1.Niveau facile------------\n");
    printf("--2.Niveau moyen--------------\n");
    printf("--3.Niveau difficile----------\n");
    printf("--0.Quitter-------------------\n");
    do
    {
        printf("Quel est votre choix?\n");
        scanf("%d",&niveau);
    }
    while(niveau<0||niveau>3);
    srand(time(NULL));
    switch(niveau)
    {
    case 0:
        printf("Aurevoire\n");
        break;
    case 1:
        printf("Vous avez choisi le niveau 1\n");
        printf("Vous avez droit a 15 tentatives\n");
        max=100;
        break;
        var_aleatoire = (rand() % (max - min + 1)) + min;
    case 2:
        printf("Vous avez choisi le niveau 2\n");
        printf("Vous avez droit a 10 tentatives\n");
        max=10000;
        var_aleatoire=(rand()%(max - min +1))+min;
        break;
    case 3:
        printf("Vous avez choisi le niveau 3\n");
        printf("Vous avez droit a 10 tentatives \n");
        max=100;
        min=10;
        var_aleatoire=(rand()%(max - min +1))+min;
        car_aleatoire= 'A'+rand()%26;
        break;
    default:
        printf("Ce n'est pas bon.");

    }
    printf("\n");
    printf("Devinez le nombre mystere\n");

    if (niveau==1)
    {
        compteur_tentatives=15;
        do
        {

            compteur_tentatives--;
            printf("Donner le nombre entre 0 et 100\n");
            scanf("%d",&a);
            if (a<var_aleatoire)
            {
                printf("C'est plus!Il vous reste %d tentatives\n",compteur_tentatives);
            }
            else if (a>var_aleatoire)
            {
                printf("C'est moins!Il vous reste %d tentatives\n",compteur_tentatives);
            }
            else
            {
                printf("Vous avez trouve en %d tentatives bravoooooo!\n",compteur_tentatives);
            }

        }
        while(a!=var_aleatoire);
    }
    else if (niveau==2)
    {
        compteur_tentatives=10;
        do
        {

            compteur_tentatives--;
            printf("Donner le nombre entre 0 et 10000\n");
            scanf("%d",&a);
            if (a<var_aleatoire)
            {
                printf("C'est plus!Il vous reste %d tentatives\n",compteur_tentatives);
            }
            else if (a>var_aleatoire)
            {
                printf("C'est moins!Il vous reste %d tentatives\n",compteur_tentatives);
            }
            else
            {
                printf("Vous avez trouve en %d tentatives bravoooooo!\n",compteur_tentatives);
            }
        }
        while(a!=var_aleatoire);
    }
    else if (niveau==3)
        {
        compteur_tentatives=10;
        do
        {

            compteur_tentatives--;
            printf("%d     %c\n",var_aleatoire,car_aleatoire);
            printf("Donner le nombre entre 0 et 100\n");
            scanf("%d",&a);
            printf("Donner un carctere entre A et Z\n");
            fflush(stdin);
            scanf("%c",&b);

            if (a<var_aleatoire&&b<car_aleatoire)
            {
                printf("C'est plus ET le cararctere est avant!Il vous reste %d tentatives    \n",compteur_tentatives);
            }
            else if (a>var_aleatoire&&b>car_aleatoire)
            {
                printf("C'est moins  ET le cararctere est apres!Il vous reste %d tentatives\n",compteur_tentatives);

            }
            else if (a>var_aleatoire&&b<car_aleatoire)
            {
                printf("C'est moins  ET le cararctere est apres!Il vous reste %d tentatives\n",compteur_tentatives);
            }
            else if (a<var_aleatoire&&b>car_aleatoire)
            {
                printf("C'est plus  ET  le cararctere est avant!Il vous reste %d tentatives\n",compteur_tentatives);

            }
             else if (a==var_aleatoire&&b>car_aleatoire)
            {
                printf("Le nombre est correct  ET  le cararctere est avant!Il vous reste %d tentatives\n",compteur_tentatives);
            }
             else if (a==var_aleatoire&&b<car_aleatoire)
            {
                printf("Le nombre est correct  ET  le cararctere est apres!Il vous reste %d tentatives\n",compteur_tentatives);
                getchar();
            }
             else if (a<var_aleatoire&&b==car_aleatoire)
            {
                printf("c'est plus   ET  le cararctere est correct!Il vous reste %d tentatives\n",compteur_tentatives);

            }
             else if (a>var_aleatoire&&b==car_aleatoire)
            {
                printf("c'est moins   ET  le cararctere est correct!Il vous reste %d tentatives\n",compteur_tentatives);
            }
             else if (a==var_aleatoire&&b==car_aleatoire)
            {
                printf("Le nombre est correct  ET  le cararctere est correct!Il vous reste %d tentatives\n",compteur_tentatives);
            }
        else
            {
                printf("Vous avez trouve en %d tentatives bravoooooo!\n",compteur_tentatives);
            }
        }
        while(a!=var_aleatoire||b!=car_aleatoire);
    }

    return 0;
}
