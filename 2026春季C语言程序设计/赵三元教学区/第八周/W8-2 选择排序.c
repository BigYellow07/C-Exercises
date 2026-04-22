#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int i, j;
	
	if(scanf("%d", &n) != 1)
	{
		return 1;
	}
	
	int *num=(int*)calloc(n, sizeof(int));
	
	for(i = 0; i < n; i ++)
	{
		if(scanf("%d", &num[i]) != 1)
		{
			return 1;
		}
	}
	
	for(i = 0; i < n - 1; i++)
	{
		int min = i;
		
		for (j = i + 1; j < n; j++)
        {
            if (num[j] < num[min])
            {
                min = j;
            }
        }
        
        if (min != i)
        {
            int temp;
			temp = num[i];
            num[i] = num[min];
            num[min] = temp;
        }
    }
    
    for(i = 0; i < n; i++)
	{
		if(i < n - 1)
		{
			printf("%d ", num[i]);
		}
		else
		{
			printf("%d\n", num[i]);
		}
	}
	
	free(num);
	
	return 0;
} 
