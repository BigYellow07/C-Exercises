#include <stdio.h>

int main(void)
{
	int x;
	double RectangularArea;
	double TriangleArea;
	double Width;
	double Leg;
	
	if(scanf("%d", &x) != 1)
	{
		return 1;
	}
	
	Width = x / 4.0;
	RectangularArea = Width * Width *2;
	
	Leg = x / 2.0;
	TriangleArea = Leg * Leg / 2;
	if(TriangleArea < RectangularArea)
	{
	    printf("%.3lf\n",RectangularArea);
	} else
	{
		printf("%.3lf\n", TriangleArea);
	}
	
	return 0;
	
}
