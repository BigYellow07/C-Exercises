#include <stdio.h>

int main(void)
{
	int student, apple;
	
	if(scanf("%d %d", &student, &apple) != 2) {
		return 0;
	}
	
	printf("%d\n", student*apple);
	
	return 0;
}