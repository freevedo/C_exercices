//#include <stdio.h>
//#include <stdlib.h>

/*int main()
{
char var ='b';
printf("%d",var);
return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
/*Exercice2 : Ce programme permet de faire une permutation de a,b,c*/
/*int main ()
{
    int a,b,c,vid;
    printf("Entrer une valeur pour a:\n");
    scanf("%d",&a);
    printf("Entrer une valeur pour b\n");
    scanf("%d",&b);
    printf("Entrer une valeur pour c\n");
    scanf("%d",&c);
    vid=a;
    a=b;
    b=c;
    c=vid;
    printf("Le resultat est desormais: a=%d a,b=%d b,c=%d c",a,b,c);
    return (0);
}*/

/*#include<stdio.h>
#include<stdlib.h>
 int main ()
 {
   int m, n,difference,somme;
   printf("m" );
scanf("%d",&m);
printf("%d\n", m);
printf("n");
scanf("%d", &n);
printf("n = %d\n", n);
somme=m+n;
printf("%d + %d \n", m,n,somme);
printf("%d - %d \n", m-n+difference);
return (0);
 }*/
 /*Exercice 4 pourcentage des candidats inscrits*/
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int a,b;
     double c=0;
     printf("Entrer le nombre de candidats inscrits:\n");
     scanf("%d",&a);
     printf("Le nombre de candidats inscrits est : %d\n",a);
     printf("Entrer le nombre de candidats presents: \n");
     scanf("%d",&b);
     printf("Le nombre de candidats presents est: %d\n",b);
     c=b/a;
     printf("%d/%d=%lf",b,a,c);
     return 0;
 }

