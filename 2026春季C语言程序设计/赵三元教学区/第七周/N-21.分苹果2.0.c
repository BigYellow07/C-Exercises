#include <stdio.h>
#include <stdlib.h>

#define P 3

int main(void)
{
	int i, m;
	int a[P];
	
	for(i = 0; i < P; i ++)
	{
		if(scanf("%d", &a[i]) != 1)
		{
			return 1;
		}
	}
	
    m = a[1];
    
    int *num_std = (int*)calloc(m, sizeof(int));
	
	for(i = 0; i < m; i ++)
	{
		if(scanf("%d", &num_std[i]) != 1)
		{
			return 1;
		}
	}
	
	int total_apples = 0;
	total_apples = a[0];
	
	int quantity_demanded = 0;
	
	int x = 0;
	
	for(i = 0; i < m; i++)
	{
		if(num_std[i] < a[2])
		{
			quantity_demanded += a[2] - num_std[i];
		}
	} 
	
	if(total_apples < quantity_demanded)
	{
		x = quantity_demanded - total_apples;
		printf("N\n");
		printf("%d\n", x);
	}
	else
	{
		x = total_apples - quantity_demanded;
		printf("Y\n");
		printf("%d\n", x);
	}
	
	free(num_std);
	
	return 0;
}
