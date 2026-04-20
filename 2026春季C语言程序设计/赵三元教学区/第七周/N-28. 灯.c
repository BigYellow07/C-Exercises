#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n;
    if(scanf("%lld", &n) != 1)
    {
    	return 1;
    }
	
    long long ans = sqrt(n);
    printf("%lld\n", ans);
    
    return 0;
}
