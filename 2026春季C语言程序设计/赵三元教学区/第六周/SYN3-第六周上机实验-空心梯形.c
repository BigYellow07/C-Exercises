#include <stdio.h>

int main(void)
{
	int n;
	int i, t, j, x, y;
	
	if(scanf("%d", &n) != 1)
	{
		return 1;
	}
	
	if(n == 1)
	{
		printf("*\n");
	}
	else if(n == 2)
	{
		printf("****\n **\n");
	}
	else
	{
		for(x = 1; x <= n + 2 * (n - 1); x ++)
		{
			printf("*");
		}
		
		printf("\n");
		
		for(i = 2; i <= n - 1; i ++)
		{
			for(t = 1; t <= i - 1; t++)
			{
				printf(" ");
			}
			
			printf("*");
			
			for(j = 1; j <= n + 2*(n - i - 1); j++)
			{
				printf(" ");
			}
			
			printf("*");
			
			printf("\n");
		}
		
		for(y = n; y <= n; y ++)
		{
			for(t = 1; t <= i - 1; t++)
			{
				printf(" ");
			}
			
			for(x = 1; x <= n; x ++)
			{
				printf("*");
			}
			
			printf("\n");
		}
	}
	
	return 0;
}
