#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*exercice 1
int main()
{
    char mot[20];
    int compteur=0;
    printf("Entrer un mot:\n");
    scanf("%s",mot);
    while (mot[compteur]!='\0')
    {
        compteur++;
    }
    printf("La longueur de %s est %d",mot,compteur);
    return 0;
}*/
/*
int main ()
{
    char mot[50];
    int i,n;
    printf("Entrer un mot\n");
    scanf("%s",mot);
    while (mot[n]!='\0')
    {
        n++;
    }
    for (i=0;i<n;i++)
    {
        if (mot[i]=='i')

    }

    return 0 ;
}
*/
/*
int main ()
{
    char ch1[20],ch2[20];
    int i,j,n;
    printf("Entre la chaine:\n");
    scanf("%s",ch1);
    n=0;
    while (ch1[n]!='\0')
    {
        n++;
    }
    j=n;
    for (i=0;i<j;i++)
    {
        ch2[j]=ch1[i];
        j--;
    }
    ch2[n]='\0';
    printf("%s",ch2);
    return 0;
}
*/
/*
int main ()
{
    char ch1[50],ch2[50],ch3[50];
    int lch1,lch2;
    printf("Entrer la chaine 1\n");
    scanf("%s",ch1);
    lch1=strlen(ch1)/2;
    printf("Entrer la chaine 2\n");
    scanf("%s",ch2);
    lch2=strlen(ch2)/2;
    strncpy(ch3,ch1,lch1);
    strncat(ch3,ch2,lch2);
    printf("%s",ch3);
    return 0;
}
*/
/*PALINDROME
int main ()
{
    char chaine[50];
    int i,j,palindrome;
    printf("Entrer une chaine de caractere:");
    scanf("%s",chaine);
    for (j=0;chaine[j];j++)
    {
        j--;
    }
    palindrome=1;
    for(i=0;palindrome&&i<j;i++,j--)
    {
        if (chaine[i]!=chaine[j])
        {
            palindrome=0;
        }
    }
    if (palindrome)
    {
        printf("la chaine %s est un palindrome\n",chaine);
    }
    else
        {
        printf("La chaine %s n'est pas un palindrome\n",chaine);
    }

    return 0;
}
*/
int main ()
{
    char chaine[50],chaineb[50],car[50];
    int compteur=1,lg,n,i,j;
    printf("entrer une chaine de caractere\n");
   scanf("%s",chaine);
   printf("Donner la chaine a rechercher\n");
   scanf("%s",car);
  n=strlen(car);
   for (i=0;i<n;i++)
   {
       if (chaine[i]==car[0])
       {
           compteur=compteur+1;
       }
   }
   compteur=j;
   printf("Le nombre d'occurrences de %s est %d",car,compteur);
    for (compteur=1;compteur<=j;compteur++)
    {
        if (chaine[i]==car[0])
        {

        }
    }
    return 0;
}
