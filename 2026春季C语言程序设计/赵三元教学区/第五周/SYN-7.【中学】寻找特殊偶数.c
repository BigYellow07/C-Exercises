#include <stdio.h>

int check(int a, int b);
 
int main(void)
{
	int min, max;
	while(1)
	{
		if(scanf("%d %d", &min, &max) != 2)
		{
			return 1;
		}
		
		if(min == 0 && max == 0)
		break;
	
		if (min < 1000 || min > 9999 || max < 1000
	    	|| max > 9999 || min > max) 
		{
        	printf("Error\n");
        	continue;
    	}

		check(min, max);
	}
		
	return 0;
}

int check(int a, int b)
{
	int count0, count1, count2, count3, count4;
	int count5, count6, count7, count8, count9;
	
	count0 = 0;
	count1 = 0;
	count2 = 0;
	count3 = 0;
	count4 = 0;
	count5 = 0;
	count6 = 0;
	count7 = 0;
	count8 = 0;
	count9 = 0;

	int counter = 0;
	int i = 0, t = 0;
	int temp;
	
	
	for(i = a; i <= b; i ++)
	{
		if(i % 2 == 0)
		{
			for(t = i; t > 0; t = t / 10)
			{
				temp = i; 
				int digit;
				digit = t % 10;
				
				switch(digit)
				{
					case 0:
						count0 ++;
						break;
						
					case 1:
						count1 ++;
						break;
						
					case 2:
						count2 ++;
						break;
							
					case 3:
						count3 ++;
						break;
							
					case 4:
						count4 ++;
						break;
							
					case 5:
						count5 ++;
						break;
							
					case 6:
						count6 ++;
						break;
							
					case 7:
						count7 ++;
						break;
						
					case 8:
						count8 ++;
						break;
						
					case 9:
						count9 ++;
						break;
				}
			}
			
		    if(count0 < 2 && count1 < 2 && count2 < 2 &&
			   count3 < 2 && count4 < 2 && count5 < 2 &&
			   count6 < 2 && count7 < 2 && count8 < 2 &&
			   count9 < 2 )
			{
				counter ++;
				printf("%d  ", temp);
			}
			
			count0 = 0;
			count1 = 0;
			count2 = 0;
			count3 = 0;
			count4 = 0;
			count5 = 0;
			count6 = 0;
			count7 = 0;
			count8 = 0;
			count9 = 0;
	    }
    }
    
    printf("\n");
	printf("counter=%d\n", counter);
	
	return 0;
}
