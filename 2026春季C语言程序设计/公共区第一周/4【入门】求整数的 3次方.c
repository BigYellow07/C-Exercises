#include <stdio.h>

int main (void)
{
    int x;

    if(scanf("%d", &x) == 1) {
        printf("%d\n", x*x*x);
    }

    return 0;
}
