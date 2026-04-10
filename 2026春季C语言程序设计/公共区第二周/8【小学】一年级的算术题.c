#include <stdio.h>

int main (void)
{
    int a, b;

    if (scanf("%d %d", &a, &b) == 2){

        printf("%d+%d=%d\n", a, b, a+b);
        printf("%d-%d=%d\n", a, b, a-b);
        printf("%d*%d=%d\n", a, b, a*b);
        printf("%d/%d=%d\n", a, b, a/b);
        printf("%d%c%d=%d\n", a, '%', b, a%b);
    }

    return 0;
}
