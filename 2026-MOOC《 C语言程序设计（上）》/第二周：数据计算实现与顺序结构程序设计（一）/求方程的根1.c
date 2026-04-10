#include <stdio.h>
#include <math.h>
int main( )
{ float a, b, c, d, x1, x2, q; 
  printf("Please input a, b, c\n"); 
  scanf("%f,%f,%f", &a, &b, &c); 
  d=b*b-4*a*c;
  q=sqrt (d); 
  x1=(-b+q)/(2*a); 
  x2=(-b-q)/(2*a); 
  printf("x1=%.2f, x2=%.2f \n ", x1, x2); 
}
