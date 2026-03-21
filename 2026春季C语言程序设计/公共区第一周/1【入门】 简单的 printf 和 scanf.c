#include <stdio.h>  
  
int main (void)  
{  
    int x;  
    if(scanf("%d", &x) == 1) {  
        printf("x=%d,x=%o,x=%x\n", x, x, x);  
    }  
    return 0;  
}  
