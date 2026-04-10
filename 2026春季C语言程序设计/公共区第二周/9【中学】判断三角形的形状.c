#include <stdio.h>

int main (void)
{
    int a, b, c;

    if(scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    if(a == b && a== c && b == c) {
        printf("equilateral triangle.\n");
    } else if(a + b <= c || a + c <= b || c + b <= a){
        printf("non-triangle.\n");
    } else if((a == b && a != c) || (c == b && c != a) || (a == c && a != b)) {
        printf("isoceles triangle.\n");
    } else {
        printf("triangle.\n");
    }

    return 0;
}
