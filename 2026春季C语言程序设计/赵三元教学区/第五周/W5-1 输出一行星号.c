#include <stdio.h>

int main(void)
{
    int n;
    int i;

    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    for(i = 1; i <= n; i ++)
    {
        printf("*");
    }

    printf("\n");

    return 0;
}
