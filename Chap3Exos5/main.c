#include <stdio.h>
#include <stdlib.h>

int main()
{

 int nombre,valeur;
 printf("entrez votre nombre:\n");
 scanf("%d",&nombre);
do
{
valeur=nombre%10;
printf("%d",valeur);
nombre=nombre/10;
}
while (nombre>0);


    return 0;
}
