#include <stdio.h>

int main(void)
{
	int student, cup;
	double volume, after_allocation;
	
	if(scanf("%lf %d", &volume, &student) != 2) {
		return 0;
	}
	
	cup = student * 2;
	after_allocation = volume / student;
	printf("%.3lf\n%d\n", after_allocation, cup);
	
	return 0;
}
	
		