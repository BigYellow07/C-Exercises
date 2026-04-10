#include <stdio.h>

int main (void)
{
    char x;
    if (scanf("%c", &x) == 1) {
        printf("The ASCII of character '%c' is %d.\n", x, x);
    }

    return 0;
}
