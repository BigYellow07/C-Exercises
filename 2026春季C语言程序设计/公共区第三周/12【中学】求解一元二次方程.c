#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double Delta;
    double x, x1, x2;
    double a1, a2, b1, b2;
    double s;

    if(scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    Delta = 1.0 * b * b - 4.0 * a * c;

    if((a == b) && ( a == 0)) {
        printf("Input error!\n");
    }

    if((Delta < 0.0) && (b != 0)){
        s = (-1.0) * Delta;
        a1 = ((-1.0) * b ) / (a * 2.0);
        a2 = ((-1.0) * b ) / (a * 2.0);
        b1 = sqrt(s) / (a * 2.0);
        b2 = ((-1.0) * sqrt(s)) / (a * 2.0);
        printf("x1=%.6lf+%.6lfi\nx2=%.6lf%.6lfi\n", a1, b1, a2, b2);
    } else if((Delta < 0.0) && (b == 0)){
        s = (-1.0) * Delta;
        b1 = sqrt(s) / (a * 2.0);
        b2 = ((-1.0) * sqrt(s)) / (a * 2.0);
        printf("x1=%.6lfi\nx2=%.6lfi\n", b1, b2);
    }
           
    if((a == 0) && (Delta > 0.0) && (b != 0)){
        x = (-1.0) * c / b;
        if(x == 0) {
            x = 0.0;
           printf("x=%.6lf\n", x);
        } else {
           printf("x=%.6lf\n", x);
        }
    }
        
    if((Delta > 0.0) && (a != 0)) {
        x1 = ((-1.0) * b + sqrt(Delta)) / (a * 2.0);
        x2 = ((-1.0) * b - sqrt(Delta)) / (a * 2.0);
        printf("x1=%.6lf\nx2=%.6lf\n", x1, x2);
    }
    
    if((Delta == 0.0) && (a != 0)) {
        x1 = (-1.0) * b / (a * 2.0);
        if(x1 == 0) {
            x1 = 0.0;
           printf("x1=x2=%.6lf\n", x1);
        } else {
           printf("x1=x2=%.6lf\n", x1);
        }
    } 

    return 0;
}
