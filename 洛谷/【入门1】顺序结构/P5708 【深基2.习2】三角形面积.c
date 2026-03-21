#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	double p, s, temp;
	
	if(scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		return 0;
	}
	
	p = (a + b + c) / 2;
	temp = p * (p - a) * (p - b) * (p - c);
	s = sqrt(temp);
	
	printf("%.1lf\n", s);
	
	return 0;
 } 
