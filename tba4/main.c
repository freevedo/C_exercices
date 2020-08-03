#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[3][4];
    int i,j;
    for (j=0;j<4;j++)
    {
        for (i=0;i<3;i++)
        {
            scanf("%d",&t[j][i]);
        }
    }
    printf("Hello world!\n");
    return 0;
}
