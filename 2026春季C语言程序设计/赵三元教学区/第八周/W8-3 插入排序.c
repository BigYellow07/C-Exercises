#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int i, j;

    if(scanf("%d", &n) != 1)
    {
        return 1;
    }

    int *num=(int*)calloc(n, sizeof(int));

    for(i = 0; i < n; i ++)
    {
        if(scanf("%d", &num[i]) != 1)
        {
            return 1;
        }
    }

    for(i = 1; i < n; i++)
    {
        int temp = num[i];

        for(j = i - 1; j >= 0 && num[j] > temp; j--)
        {
            num[j + 1] = num[j];
        }

        num[j + 1] = temp;
    }

    for(i = 0; i < n; i++)
    {
        i < n - 1 ? printf("%d ", num[i]) : printf("%d\n", num[i]);
    }

    free(num);
    
    return 0;
}
