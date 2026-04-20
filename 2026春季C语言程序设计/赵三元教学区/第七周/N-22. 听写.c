#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int i;
	
	if(scanf("%d", &n) != 1)
	{
		return 1;
	}
	
	int length = n + 2;
	char *word = (char*)calloc(length, sizeof(char));
	
	for(i = 0; i <= n; i ++)
	{
		if(scanf("%c", &word[i]) != 1)
		{
			return 1;
		}
	}
	
	int order_s, order_t;
	order_s = -1;
	order_t = -1;
	
	for(i = 1; i <= n + 1; i ++)
	{
		if(word[i] == 's')
		{
			order_s = i;
			break;
		}
	}
	
	for(i = 1; i <= n + 1; i ++)
	{
		if(word[i] == 't')
		{
			order_t = i;
		}
	}
	
	if(order_s < order_t && order_s != -1)
	{
		printf("good pronunciation\n");
	}
	else
	{
		printf("just like Eijvy\n");
	}
	
	free(word);
	
	return 0; 
}
