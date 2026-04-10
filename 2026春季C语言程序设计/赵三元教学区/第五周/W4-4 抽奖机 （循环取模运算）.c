#include <stdio.h>  
  
int main(void)  
{  
    int n;  
    int i;
    int t = 0;  
    int z = 0;  
    int y = 0;  
    int reward = 0;  
  
    if(scanf("%d", &n) != 1)  
    {  
        return 1;  
    }  
  
    for(i = 1; i <= n; i ++)  
    {  
        //每次循环t都会把个位丢掉，执行到最后一位后会变成0,从而跳出循环。  
        for(t = i; t > 0; t = t / 10)  
        {  
            //取t的个位数字来进行判断，y记录6的个数  
            int digit;  
            digit = t % 10;  
            if(digit == 6)  
            {  
                y ++;  
            }  
        }  
          
        //不同的y对应不同的奖励  
        switch(y)  
        {  
            case 1:  
            z = 6;  
            break;  
  
            case 2:  
            z = 66;  
            break;  
  
            case 3:  
            z = 666;  
            break;
            
            case 4:
            z = 6666;
            break;
        }  
  
        reward += z;  
          
        //完成一次循环之前记得把6的计数器y和奖励都清空，否则会多加不少。  
        y = 0;  
        z = 0;        
    }
    
    printf("%d\n", reward);
  
    return 0;
}
