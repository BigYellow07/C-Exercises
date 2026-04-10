#include <stdio.h>

int main(void)
{
	int n, m;
	int i;
	int temp = 0;
	
	if(scanf("%d", &n) != 1)
	{
		return 1;
	}
	
	for(i = 1; i > 0; i ++)
	{
		temp += i;
		if(temp >= n)
		{
			break;
		}
	}
	
	m = i;
	printf("%d\n", m);
	
	return 0;
} 
