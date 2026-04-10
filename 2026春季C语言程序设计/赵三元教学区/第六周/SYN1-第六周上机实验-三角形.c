#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	
	if(scanf("%d", &n) != 1)
	{
		return 1;
	}
	
	for(i = n; i >= 1; i --)
	{
		for(j = 0; j < n - i; j ++)
		{
			printf(" ");
		}
		
		for(j = 0; j < 2 * i - 1; j ++)
		{
			printf("*");
		}
		
		printf("\n");
	}
		
		return 0;
}
