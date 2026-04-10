#include <stdio.h>

int main(void)
{
    int a;
    int i;

    if(scanf("%d", &a) != 1)
    {
        return  0;
    }

    for(i=1; i <= a; i++)
    {
        printf("*");
    }

    printf("\n");

    return 0;
}
