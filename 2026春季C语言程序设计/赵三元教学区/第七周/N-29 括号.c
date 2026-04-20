#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long n;
  
  if(scanf("%lld", &n) != 1)
  {
    return 1;
	}
	
	if(n == 0)
	{
		printf("Yes\n");
		return 0;
	}
	
	if(n % 2 != 0)
	{
		printf("No\n");
		return 0;
	}
	
	getchar(); 
	
	int length = n + 1;
	char *bracket = (char*)calloc(length, sizeof(char));
	
	int i;
  
	for(i = 0; i <= n; i ++)
	{
		if(scanf("%c", &bracket[i]) != 1)
		{
			return 1;
		}
	}
	
	bracket[n] = '\0';
	
	int count = 0;
  
	for(i = 0; i < n; i++)
	{
		if(bracket[i] == '[')
		{
			count += 1;
		}
		else
		{
			count -= 1;
		}
		
		if(count < 0)
		{
			printf("No\n");
			free(bracket);
			return 0;
		}
	}
	
	if(count == 0)
  {
      printf("Yes\n");
  }
  else
  {
      printf("No\n");
  }
	
	free(bracket); 
	
	return 0;
}
