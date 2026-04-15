#include <stdio.h>

int main(void)
{
	int x;
	int i, t;
	int isPrime, maxPrime;
	
	maxPrime = 0;
	
	if(scanf("%d", &x) != 1)
	{
		return 1;
	}
	
	for(i = 2; i < x; i ++)
	{
		isPrime = 1;
		
		for(t = 2; t < i; t ++)
		{
			if(i % t == 0)
			{
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime == 1)
		{
			maxPrime = i;
		}
	}
	
	printf("The max prime number is %d.\n", maxPrime);
	
	return 0;
}
