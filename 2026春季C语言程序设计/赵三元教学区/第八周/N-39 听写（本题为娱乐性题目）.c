#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void)
{
	int n;
	int i;
	
	if(scanf("%d", &n) != 1)
	{
		return 1;
	}
	
	int* num = (int*)calloc(n, sizeof(int));
	
	for(i = 0; i < n; i ++)
	{
		if(scanf("%d", &num[i]) != 1)
		{
			return 1;
		}
	}
	
	qsort(num, n, sizeof(int), compare); 
	
	for(i = 0; i < n; i ++)
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

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
