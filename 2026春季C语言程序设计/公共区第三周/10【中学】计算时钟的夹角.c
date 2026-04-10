#include <stdio.h>
#include <math.h>

int main() {
    int h, m;
    if (scanf("%d %d", &h, &m) == 2) {
        double diff = fabs(30.0 * (h % 12) - 5.5 * m);
        double angle = 180.0 - fabs(diff - 180.0);
        printf("At %d:%02d the angle is %.1f degrees.\n", h, m, angle);
    }
    return 0;
}
