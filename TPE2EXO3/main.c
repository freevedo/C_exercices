#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,h2;
    float total;

    printf("Ce programme facture un service de babysitting\n");
    printf("A quelle heure desirez vous nos services!\n");
    printf("H1\n");
    scanf("%d",&h1);
    printf("H2\n");
    scanf("%d",&h2);
    if (h1>=18&&h2<=21)
    {
        total=(h2-h1)*1.5;
        printf("Vous payer %.3f dinars",total);
    }
    else if (h1>21&&h2<=24)
    {
        total=(h2-h1)*4.5;
        printf("Vous payer %.3f dinars",total);
    }
    return 0;
}
