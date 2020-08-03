#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,poids,am,at,depis,budget,niv,tcb1=1500,tcb2=1800,tcb3=2100,tcb;//on a initialiser ampour antecedents medicaux,at pour arret de travail,depis pour depistage,niv pour niveaux
    float imc,tcf,size;// on a imc pour indice de masse corporelle,tcf pour taux de cotisation final et tcb pour taux de cotisation de base
    printf("==LES ASSURANCES==\n");
    printf("Veuillez entrer vos donnes:\n");
    printf("Votre age:\n");
    scanf("%d",&year);
    printf("Age:%d\n",year);
    printf("Votre taille:\n");
    scanf("%f",&size);
    printf("Taille:%f\n",size);
    printf("Votre poids:\n");
    scanf("%d",&poids);
    printf("Poids:%d\n",poids);
    imc=(float)poids/(size*size);
    printf("Votre IMC est :%.2f\n",imc);
    printf("Avez vous subi une operation chirugircale lors des 10 derniers annees : oui taper 1, nno taper 0\n");
    scanf("%d",&am);
    printf("Operations chirurgicales:%d\n",am);
    printf("Avez vous eu un arret de travail de plus d'un mois lors des 5 derniers annees : si oui taper 1 si non taper 0\n");
    scanf("%d",&at);
    printf("Arret de travail:%d\n",at);
    printf("Avez vous ete depister a l'une des maladies virales suivantes: aucun 0, VHA(HEPATITE A)1, VHB(HEPATITE B)2, VHC(HEPATITE C)3, VIH 4\n");
    scanf("%d",&depis);
    printf("Depistage:%d\n",depis);
    printf("Quel est votre budget de base?\n");
    scanf("%d",&budget);
    printf("Budget:%d\n",budget);

    if (am==1||at==1||(depis!=0&&depis!=1))//<
    {
        printf("Vous representez un client a haut risque pour nous. !!DOSSIER REJETE!!");
    }
    else if (year > 50 || depis==1 || imc<16.5||imc>30, budget>=2100)
    {
       tcf=tcb1*1.15;
        printf("Vous representer un risque moyen pour nous\n");
        printf("Nous vous proposons 3 niveaux de prestations\n");
        printf("Niveau 1: maximum de prestations remboursées = 3000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de %f\n",tcf);
        printf("Niveau 2:maximum de prestations remboursées = 3500 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de %f\n",tcf);
        printf("Niveau 3: maximum de prestations remboursées = 5000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de %f\n",tcf);
        printf("Choississez un niveau\n");
        scanf("%d",&niv);
    }
    else if (year > 50 || depis==1 || imc<16.5||imc>30,budget>=1800&&budget<2100)
    {
       tcf=tcb2*1.15;
        printf("Vous representer un risque moyen pour nous\n");
        printf("Nous vous proposons 2 niveaux de prestations\n");
        printf("Niveau 1: maximum de prestations remboursées = 3000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de %f\n",tcf);
        printf("Niveau 2:maximum de prestations remboursées = 3500 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de %f\n",tcf);
         printf("Choississez un niveau\n");
        scanf("%d",&niv);
    }
    else if (year > 50 || depis==1 || imc<16.5||imc>30,budget>=1500&&budget<1800)
    {
       tcf=tcb3*1.15 ;
       printf("Vous representer un risque moyen pour nous\n");
        printf("Nous vous proposons 1 niveau de prestations\n");
        printf("Niveau 1: maximum de prestations remboursées = 3000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de %f\n",tcf);
         printf("Choississez un niveau\n");
        scanf("%d",&niv);
    }

    else
    {
        printf("Quel est votre tarif de cotisation de base?\n");
        scanf("%d",&tcb);
       if(tcb>2100)
       {
           printf("Nous vous proposons 3 niveaux de prestations\n");
           printf("niveau 1 : maximum de prestations remboursées = 3000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de 1500 DT.\nniveau 2 : maximum de prestations remboursées = 3500 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de 1800 DT.\nniveau 3 : maximum de prestations remboursées = 5000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de 2100 DT.\n");
            printf("Choisissez un niveau:\n");
            scanf("%d",&niv);
       }
       else if (tcb<2100&&tcb>1800)
       {
           printf("Nous vous proposons 2 niveaux de prestations\n");
           printf("niveau 1 : maximum de prestations remboursées = 3000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de 1500 DT.\nniveau 2 : maximum de prestations remboursées = 3500 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de 1800 DT.\n");
            printf("Choisissez un niveau:\n");
            scanf("%d",&niv);
       }
       else if(tcb<1800&&tcb>1500)
       {
           printf("niveau 1 : maximum de prestations remboursées = 3000 DT par an et par prestataire dans ce cas, le tarif de cotisation de base est de 1500 DT.\n");
            printf("Choisissez un niveau:\n");
            scanf("%d",&niv);
       }

    }


    switch(niv)
    {
    case 1:
        printf("Vous avez les prestations suivantes:\nConsultations: 20DT/ACTE\nMedicaments: 400DT\nAnalyses:150DT\nRadiologie:180DT\nChirurgie:1500DT\n");
    break;
    case 2:
        printf("Vous avez les prestations suivantes:\nConsultations: 30DT/ACTE\nMedicaments: 600DT\nAnalyses:200DT\nRadiologie:250DT\nChirurgie:1800DT\n");
    break;
    case 3:
       printf("Vous avez les prestations suivantes:\nConsultations: 40DT/ACTE\nMedicaments: 600DT\nAnalyses:300DT\nRadiologie:300DT\nChirurgie:2000DT\n");
    break;
    default :
        printf("Je nai pas de prestations pour vous.");
        break;
    }

        return 0;
}
