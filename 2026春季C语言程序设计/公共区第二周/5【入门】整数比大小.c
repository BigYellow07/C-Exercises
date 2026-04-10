#include <stdio.h>

int main (void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    if (a > b){
        printf("min=%d\n", b);
    } else {
        printf("min=%d\n", a);
    }

    return 0;
}
