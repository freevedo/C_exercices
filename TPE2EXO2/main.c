#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    unsigned char operande;
    float resultat;

    printf("ce programme permet de caculer\n");
    printf("==Les operandes sont:==\n ");
    printf("1.(+)\n");
    printf("2.(-)\n");
    printf("3.(/)\n");
    printf("4.(*)\n");
    printf("5.(%%)\n");
    printf("entrer le 1er nombre\n");
    scanf("%d",&a);
    printf("entrer le 2eme nombre:\n");
    scanf("%d",&b);
    printf(" choisissez  l'operande:\n");
    scanf("%c",&operande);
    operande=getchar();

    switch(operande)
    {
    case '+':
        resultat=a+b;
        printf("et bien ca fait %d+%d=%.3f",a,b,resultat);
        break;
    case '-':
        resultat=a-b;
        printf("Et bien ca fait %d-%d=%.3f",a,b,resultat);
        break;
    case '/':
        resultat=a/b;
        printf("Et bien ca fait %d/%d=%.3f",a,b,resultat);
        break;
    case '*':
        resultat=a*b;
        printf("Et bien ca fait %d*%d=%.3f",a,b,resultat);
        break;
    case '%':
        resultat=a%b;
        printf("Et bien ca fait %d %% %d=%.3f",a,b,resultat);
        break;
    default:
        printf("ERREUR: Vous n'avez pas entrer le bon caractere!");
        break;
    }

    return 0;
}
