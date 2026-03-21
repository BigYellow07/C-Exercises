#include <stdio.h>

int main(void)
{
	char x;
	
	if(scanf("%c", &x) != 1) {
		return 0;
	}
	
	printf("  %c  \n", x);
	printf(" %c%c%c \n", x, x, x);
	printf("%c%c%c%c%c\n", x, x, x, x, x);
	
	return 0;
}