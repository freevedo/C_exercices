/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float total;
    printf("Ce programme est pour faire des  remises\n");
    printf("Le client doit payer:\n");
    scanf("%d",&a);
    if (a<=20)
    {
        printf("Il n'y a pas de remise vous payer %d DT\n",a);
    }
    else if (a>20&&a<=100)
    {
        total = a-(a*5/100);
        printf("Vous payer %.3f DT",total);
    }
    else if (a>100&&a<=200)
    {
        total =a-(a*10/100);
        printf("Vous payer %.3f DT",total);
    }
    else if (a>200)
    {
        total=a-(a*15/100);
        printf("vous payer %.3f DT",total);
    }
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,mont;
    float total;
    printf("Ce programme permet des remises!\n");
    printf("Entrer le montant que le client doit payer:\n");
    scanf("%d",&a);
    printf("Montant a payer les intervalles:\n");
    printf("1. Montant <=20DT\n2. Montant compris entre 20 et 100DT\n3. Montant compris entre 100 et 200 DT\n4. Montant >200DT\n");
    printf("Choisissez l'intervalle du montant\n");
    scanf("%d",&mont);
    switch(mont)
    {
    case 1:
        printf("il nya pas de remise!\n");
        break;
    case 2:
         total = a-(a*5/100);
        printf("Vous payer %f\n ",total);
        break;
    case 3:
        total =a-(a*10/100);
        printf("Vous payer %f\n",total);
        break;
    case 4:
        total=a-(a*15/100);
        printf("Vous payer %f\n",total);
        break;
    default:
        printf("Vous navez pas saisi un bon montant\n");
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float total;
    printf("Ce programme permet des remises!\n");
    printf("Entrer le montant que le client doit payer:\n");
    scanf("%d",&a);
    switch(a)
    {
     case 0 ... 20 :
        printf("il nya pas de remise!\n");
        break;
    case 21 ... 100 :
         total = a-(a*5/100);
        printf("Vous payer %f\n ",total);
        break;
    case 101 ... 200:
        total =a-(a*10/100);
        printf("Vous payer %f\n",total);
        break;
    default :
        total=a-(a*15/100);
        printf("Vous payer %f\n",total);
        break;


    }
    return 0;
}
