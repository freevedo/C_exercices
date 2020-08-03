#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr_ann=1;
    float a,b,c,d,capital_annuel,interet_annuel,capital_debut;
    printf("==Programme taux d'interets\n");
    printf("Quel est votre capital de depart?\n");
    scanf("%f",&a);
    printf("Quel est votre montant de depot annuel\n");
    scanf("%f",&b);
    printf("Quel est votre d'interet annuel en %%(pas plus de 15%%)?\n");
    scanf("%f",&c);
    printf("Montant de depot annuel :%f\n",b);
    printf("Taux d'interet annuel suppose fixe:%f\n",c);
    printf("Quel est votre seuil de richesse voulu?\n");
    scanf("%f",&d);
    printf("\n");
    printf("Montant de depot annuel:%f\n",b);
    printf("Taux d'interet annuel suppose fixe:%f\n",c);
    do
    {
 interet_annuel=capital_debut*c/100;
        capital_annuel=capital_debut+interet_annuel;
       capital_debut=capital_annuel+b;

        printf("Pour l'annee %d\n le capital au debut est %f\n, l'interet annuel est %f\n, le capital est %f \n",nbr_ann,capital_debut,interet_annuel,capital_annuel);
        nbr_ann++;
   }while(capital_annuel<d);

    return 0;
}
