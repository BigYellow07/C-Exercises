#include<stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int counter;
	int min, max;
	int i, t;
	
	counter = 0;
	min = 0;
	max = 0;
	
	if(scanf("%d", &n) != 1 || n <= 0 || n > 6)
	{
		return 1;
	}
	
	min = pow(10, n-1);
	max = pow(10, n) - 1;
	
	for(i = min; i <= max; i++)
	{
		int temp;
		temp = 0;
		
		for(t = i; t > 0; t = t / 10)
		{
			int digit;
			digit = 0;
			
			digit = t % 10;
			temp += pow(digit, n);
		}
		
		if(i == temp)
		{
			printf("%d\n", i);
			counter ++;
		}
		
		temp = 0;
	}
	
	if(counter == 0)
	{
		printf("No output.\n");
	}
	
	return 0;
} 
