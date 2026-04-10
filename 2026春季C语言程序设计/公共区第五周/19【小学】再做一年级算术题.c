#include <stdio.h>

int main(void)
{
	int a, b;
	char op;
	
	if(scanf("%d%c%d", &a, &op, &b) != 3)
	{
		return 1;
	}
	
	switch(op)
	{
		case 43:
			printf("%d\n", a+b);
			break;
			
		case 45:
			printf("%d\n", a-b);
			break;
			
		case 42:
			printf("%d\n", a*b);
			break;
			
		case 47:
			printf("%d\n", a/b);
			break;
			
		case 37:
			printf("%d\n", a%b);
			break;
	}
	
	return 0;
}
