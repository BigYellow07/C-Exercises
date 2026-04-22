#include <stdio.h>

int main(void)
{
	int h;
	int i, j;
	
	if(scanf("%d", &h) != 1)
	{
		return 1;
	}
	
	if(h == 1)
	{
		printf("*\n");
		return 0;
	}
	else if(h == 2)
	{
		printf("***\n *\n");
		return 0;
	}
	else
	{
		for(i = 1; i <= 2 * h - 1; i ++)
		{
			printf("*");
		}
		
		printf("\n");
		
		for(i = 2; i <= h - 1; i ++)
		{
			for(j = 1; j <= i - 1; j ++)
			{
				printf(" ");
			}
			
			printf("*");
			
			for(j = 1; j <= 1 + 2 * (h - i - 1); j ++)
			{
				printf(" ");
			}
			
			printf("*\n");
		}
		
		for(j = 1; j <= h - 1; j ++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
  
	return 0;
} 
