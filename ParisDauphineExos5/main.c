#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Ce programme permet de saisir 3 nombres et de determiner le + grand des 3\n");
    printf("Entrer le 1er nombre:\n");
    scanf("%d",&a);
    printf("Entrer le 2eme nombre:\n");
    scanf("%d",&b);
    printf("Entrer le 3eme nombre:\n");
    scanf("%d",&c);
    if (a<b&&b<c)
    {
        printf("Et bien le 3eme est le plus grand\n");
    }
    else
        if(b<c&&c<a)
        {
            printf("Et bien le 1er est le plus grand\n");
        }
        else
             if (c<a&&a<b)
            {
                printf("Et bien le 2eme est le plus grand\n");
            }
                else
                {
                    printf("Et bien je ne  peut point vous aider!\n");
                }


    return 0;
}
