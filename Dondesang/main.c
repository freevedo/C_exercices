#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,k,lg,a,b,c,age,sexe,date[30];
    char nom[20],prenom[20],gsanguin[10],email[50],jj[3],mm[3],aaaa[5];
    printf("Bonjour\n");
      /* int i = 0;

    //Tant que nous ne sommes pas arrivés a la fin de la chaine, continuer
    while (nom[i] != '\0')
    {

        /*si chaine[1] est une minuscule
         *Car les minuscules se situent entre 97 et 122 inclusivement
         */
      /*  if (nom[i]  >= 97 &&  nom[i] <= 122)

            //Convertir en majuscules
            nom[i] = nom[i] - 32;
        i++;
    }*/
        printf("Quel est votre nom\n");
    gets(nom);
    printf("Quel est votre prenom\n");
    gets(prenom);
    printf("Quel est votre age\n");
    scanf("%d",&age);
    printf("Quel est votre sexe\n");
    printf("1.Masculin\n");
    printf("2.Feminin\n");
    printf("3.Neutre\n");
    scanf("%d",&sexe);
    switch(sexe)
    {
    case 1:
        printf("Homme\n");
        break;
    case 2:
        printf("Femme\n");
        break;
    case 3:
        printf("Neutre\n");
        break;
    default:
        printf("Inconnu\n");
    }
    do
    {
        printf("Groupe sanguin(A+,B+,A-,B-,AB+,AB-,O-,O+)\n");
        scanf("%s",gsanguin);
    }
    while(gsanguin=='A+'&&gsanguin!='B+'&&gsanguin!='A-'&&gsanguin!='B-'&&gsanguin!='AB+'&&gsanguin!='AB-'&&gsanguin!='O-'&&gsanguin!='O+');
    do
    {
        printf("Entrer votre email:");
        scanf("%s",email);
        lg=strlen(email);
        k=0;
        for(i=0; i<lg; i++)
        {
            if(email[i]=='@')
            {
                k++;
            }
        }
    }
    while(k!=1 || email[0]=='@' || email[lg-1]=='@');
    do{
           printf("Entrer la date du don: selon le format jj/mm/aaaa\n");
    scanf("%s/\t",jj);
    scanf("%s/\t",mm);
    scanf("%s/\t",aaaa);
    a=strlen(jj);
    b=strlen(mm);
    c=strlen(aaaa);
    }
    while(a!=2&&b!=2&&c!=aaaa);
    printf("Bonjour Mr %s %s, le Vous avez fait un don de sang'%s'\n  ",nom,prenom,gsanguin);

    return 0;
}
