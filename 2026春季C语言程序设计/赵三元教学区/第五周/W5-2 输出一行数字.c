#include <stdio.h>

int main(void)
{
	int m, n;
	int i, t;
	
	if(scanf("%d %d", &m, &n) != 2)
	{
		return 1;
	}
	
	t = m + n - 1;
	
	for(i = m; i <= t; i ++)
	{
		printf("%d", i);
	}
	
	printf("\n");
	
	return 0;
}
