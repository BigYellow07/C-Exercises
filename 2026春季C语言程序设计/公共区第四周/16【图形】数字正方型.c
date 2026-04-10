#include <stdio.h>

int main(void)
{
    int n, a;
    int x, y;

    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    a = 1;


    for(y = 1; y <= n; y++)
    {   
        for(x = 1; x <= n; x++)
        {
            printf(" %2d", a);

            a++;
        }

        printf("\n");
    }

    return 0;
}
