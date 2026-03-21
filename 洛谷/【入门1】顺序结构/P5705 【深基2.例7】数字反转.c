#include <stdio.h>

int reserve_number(int num);

int main(void)
{
	int a, b;
	
	if(scanf("%d.%d", &a, &b) != 2){
		return 0;
	}
	
	a = reserve_number(a);
	b= reserve_number(b);
	
	printf("%d.%d", b, a);
	
	return 0;
}
	
	
int reserve_number(int num)
{
	int reserve = 0;
	
	while(num != 0) {
		int digit = num % 10;
		
		reserve = reserve*10 + digit;
		num /= 10;
	}
	
	return reserve;
}
