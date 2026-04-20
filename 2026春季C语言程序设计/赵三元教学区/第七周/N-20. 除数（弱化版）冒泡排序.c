#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;
	int temp, t;
	int i, j;
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
	
	for(i = 0; i < count - 1; i++)
	{
      for(j = 0; j < count - i - 1; j++)
		  {
          if (k[j] > k[j + 1])
			    {
              t = k[j];
              k[j] = k[j + 1];
              k[j + 1] = t;
          }
      }
  }
	
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
