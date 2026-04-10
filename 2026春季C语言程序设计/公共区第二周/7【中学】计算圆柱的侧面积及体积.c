#include <stdio.h>

int main (void)
{
    double r, h;
    double s, v;
    double pi = 3.1415926;

    if (scanf("%lf\n%lf", &r, &h) == 2) {

        s = 2.0 * pi *r * h;
        v = pi * r * r * h;

        printf("s=%.2lf,v=%.2lf\n", s, v);
    }

    return 0;
}
