#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*  typedef struct personne
    {
        char nom[30];
        char prenom[25];
        int telephone;
        char email[100];
    }personne;
int main()
{
    int i,j,n;
  /* 2. struct personne pers1={"Programmation","Procedurale",1,"ProgrammationProcedurale1@esprit.tn" };
        printf("Nom: %s\n",pers1.nom);*/
// 3.
/*  personne pers1;
  printf("Entrer votre nom\n");
  scanf("%s",pers1.nom);
  printf("Entrer votre prenom\n");
  scanf("%s",pers1.prenom);
  printf("Votre numero de telephone\n");
  scanf("%d",&pers1.telephone);
  getchar();
  printf("Entrer votre adresse email:\n");
  scanf("Email: %s\n",pers1.email);
  printf("Nom: %s\n",pers1.nom);
  printf("Prenom: %s\n",pers1.prenom);
  printf("Telephone: %d\n",pers1.telephone);
  gets(pers1.email);
  printf("Email: %s\n",pers1.email);
  personne pers2[100];
  for (i=0;i<5;i++)
  {
      printf("Personne %d\n",i+1);
      printf("Quel est votre nom\n");
      scanf("%s",pers2[i].nom);
      printf("Quel est votre prenom\n");
      scanf("%s",pers2[i].prenom);
      printf("Quel est votre numero de telephone\n");
      scanf("%d",&pers2[i].telephone);
      getchar();
      printf("Quel est votre email:\n");
      scanf("%s",pers2[i].email);
      printf("Nom: %s\n",pers2[i].nom);
      printf("Prenom: %s\n",pers2[i].prenom);
      printf("Telephone: %d\n",pers2[i].telephone);
      gets(pers2[i].email);
      printf("Email: %s\n",pers2[i].email);
      n=strlen(pers2[0].email);
      while(i<n && (pers2[0].email!='@') )
      {
          i++;

      }
      if (i==n)
          {
          printf("il nya pas de caracter @\n");
          }
          else
          {
          printf("Caractere @ esxistant\n");
          }

  }
  return 0;
}*/
/*
typedef struct point
{
    float x;
    float y;
}point;
int main ()
{
   point p1;
   printf("Entrer l'abscisse du point 1\n");
   scanf("%f",&p1.x);
   printf("Entrer l'ordonne du point 1\n");
   scanf("%f",&p1.y);
   printf("Abscisse X: %.2f\n",p1.x);
   printf("Ordonne :Y %.2f\n",p1.y);
    point p2;
    printf("Entrer l'abscisse du point 2\n");
   scanf("%f",&p2.x);
   printf("Entrer l'ordonne du point 2\n");
   scanf("%f",&p2.y);
   printf("Abscisse X: %.2f\n",p2.x);
   printf("Ordonne :Y %.2f\n",p2.y);
   point p3;
   printf("Calculer le milieu ");
   p3.x=(p1.x+p2.x)/2;
   p3.y=(p1.y+p2.y)/2;
   printf("L'abscisse:%f\n",p3.x);
   printf("L'ordonne %f\n",p3.y);
    return 0;
}*/
//exercice 4
typedef struct employe
{
    char identifiant[50];
    char nom[50];
    char adresse[50];
    char grade[50];
    int nombre_enfants;
} employe;
int main ()
{
    int n,i,a=0,menu,choix,nbr;
    char name[20],adres[29],grad[20],id[20];
    printf("Donner le nombre d'employe\n");
    scanf("%d",&n);
    employe emp1[100];
    for (i=0; i<n; i++)
    {
        printf("Employe %d",i+1);
        printf("L'identifiant:\n");
        scanf("%s",emp1[i].identifiant);
        printf("Le nom:\n");
        scanf("%s",emp1[i].nom);
        printf("L'adresse:\n");
        scanf("%s",emp1[i].adresse);
        printf("Le grade:\n");
        scanf("%s",emp1[i].grade);
        printf("Le nombre d'enfants:\n");
        scanf("%d",&emp1[i].nombre_enfants);
    }
    printf("--------Menu---------\n");
    printf("1.Mettre a jour les informations d'un employe donne par son identifiant\n");
    printf("2.Afficher le tablau des employes\n");
    printf("3.Calculer et afficher le nombres d'enfants de tous les employes\n");
    printf("0.Quitter\n");
    printf("Quel est votre choix:");
    scanf("%d",&menu);
    switch (menu)
    {
        //ta oublier le case 1 ajouter un employe: tu peut incrementer j et j devient la nouvelle valeur de n
    case 1:
        printf("donner l'identifiant de l'employe:\n");
        scanf("%s",id);
        for (i=0; i<n; i++)
        {
            if (strcmp(id,emp1[i].identifiant)==0)
            {
                printf("Que voulez vous modifier\n");
                printf("1.identifiant\n");
                printf("2.Nom\n");
                printf("3.adresse\n");
                printf("4.Grade\n");
                printf("5. Nombre d'enfants\n");
                printf("Choix\n");
                scanf("%d",&choix);
                switch (choix)
                {
                case 1 :
                    printf("Nouvel identifiant\n");
                    scanf("%s",id);
                    strcpy(emp1[i].identifiant,id);
                    break;

                printf("C'est l'employe : %s ",emp1[i].identifiant);

                case 2:
                    printf("Nouveau nom:");
                    scanf("%s",name);
                    strcpy(emp1[i].nom,name);
                    printf("Le nouveau nom est : %s",emp1[i].nom);
                }

            }

        }

    case 2:
        printf("Tableau des employes:\n");
        for (i=0; i<n; i++)
        {
            printf("Employ %d",i+1);
            printf("Identifiant : %s",emp1[i].identifiant);
            printf("Nom : %s",emp1[i].nom);
            printf("Adresse : %s",emp1[i].adresse);
            printf("Grade : %s",emp1[i].grade);
            printf("Nombre d'enfants: %d",emp1[i].nombre_enfants);
        }
        break;
    case 3:
        for (a=0,i=0; i<n; i++)
        {
            a+=emp1[i].nombre_enfants;
        }
        printf("Nombre d'enfants : %d",a);
        break;
    default:
        printf("Je ne peux pas vous aider\n");
    }
    return 0;
}
/*typedef struct equipe
{
    char nom_equipe[50];
    int victoires;
    int defaites;
    int points;
}equipe;
int main ()
{
    int n,i,j;
    equipe equip[100];
    printf("Entrer le nombre d'equipes\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Equipe %d",i+1);
        printf("Nom de l'equipe:\n");
        scanf("%s",equip[i].nom_equipe);
        printf("Nombre de victoires:\n");
        scanf("%d",&equip[i].victoires);
        printf("Nombre de defaites:\n");
        scanf("%d",&equip[i].defaites);
    }
    for (i=0;i<n;i++)
    {
        printf("Equipe: %d\n",i+1);
        printf("Nom: %s\n",equip[i].nom_equipe);
        printf("Nombre de victoires: %d\n",equip[i].victoires);
        printf("Nombres de defaites : %d",equip[i].defaites);
        equip[i].points=(equip[i].victoires*3);
        printf("Nombres de points: %d\n",equip[i].points);
    }

    return 0;
}   */
