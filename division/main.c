#include <stdio.h>
#include <stdlib.h>

int main()
{

    float c;
    int a,b;
    printf("entrer a!\n");
    scanf("%d",&a);
    printf("entrer b!\n");
    scanf("%d",&b);
    c=(float)b/a;
    printf("%d/%d=%.2f",b,a,c);
    return 0;
}
