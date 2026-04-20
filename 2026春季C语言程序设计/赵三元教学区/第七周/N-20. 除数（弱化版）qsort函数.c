#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void)
{
	int n, m;
	int temp;
	int i;
	int count = 0;
	int *k = NULL; 
	
	if(scanf("%d %d", &n, &m) != 2)
	{
		return 1;
	}
	
	temp = n / m;
	
	for(i = m; ; i ++)
	{
		if(n / i == temp)
		{
			count ++;
			k = (int*)realloc(k, count * sizeof(int));
			k[count - 1] = i;
		}
		else
		{
			break;
		}
	}
	
	for(i = m - 1; ; i --)
	{
		if(n / i == temp)
		{
			count ++;
			k = (int*)realloc(k, count * sizeof(int));
			k[count - 1] = i;
		}
		else
		{
			break;
		}
	}
	
	printf("%d\n", count);
	
	qsort(k, count, sizeof(int), compare);
	
	for(i = 0; i < count; i ++)
	{
		if(i < count -1)
		{
			printf("%d ", k[i]); 
		}
		else
		{
			printf("%d\n", k[i]);
		}
	}
	
	return 0;
}

int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
