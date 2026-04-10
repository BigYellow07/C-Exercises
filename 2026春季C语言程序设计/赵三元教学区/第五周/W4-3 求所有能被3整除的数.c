#include <stdio.h>

int main(void)
{
    int n, m;
    int i;
    int found = 0;

    if(scanf("%d %d", &n, &m) != 2)
    {
        return 1;
    }

    for(i = n; i <= m; i ++)
    {
        if(i % 3 == 0)
        {
            printf("%d\n", i);
            found = 1;

        }

    }

    if(!found)
    {
        printf("\n");
    }

    return 0;
}
