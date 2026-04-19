#include <stdio.h>

int simplification(int a, int b);
int standardization1(int a);
int standardization2(int a, int b);

int main(void)
{
    int n1, d1, n2, d2;
    int x, y;

    char op;

    if((scanf("%d/%d %c %d/%d", &n1, &d1, &op, &n2, &d2)) != 5)
    { 
        return 1;
    }

    switch(op)
    {
        case 43:

        x = n1*d2 + n2*d1;
        y = d1*d2;

        printf("%d/%d %c %d/%d = ", n1, d1, op, n2, d2);
        simplification(x, y);

        break;

        case 45:

        x = n1*d2 - n2*d1;
        y = d1*d2;

        printf("%d/%d %c %d/%d = ", n1, d1, op, n2, d2);
        simplification(x, y);
        
        break;

        case 42:

        x = n1*n2;
        y = d1*d2;

        printf("%d/%d %c %d/%d = ", n1, d1, op, n2, d2);
        simplification(x, y);

        break;

        case 47:
        x = n1*d2;
        y = d1*n2;

        printf("%d/%d %c %d/%d = ", n1, d1, op, n2, d2);
        simplification(x, y);

        break;
    }
        
    return 0;
}

int simplification(int a, int b)
{
    int temp1, temp2, result_int;

    if(a == 0)
    {
        printf("%d\n", a);
        return 0;
    } else if(a < b) 
    {
        temp2 = b % a;
        if(temp2 == 0)
        {
            int c =  b / a;
            standardization1(c);
        }
        else
        {
            standardization2(a, b);
        }
    } 
    else if(a >= b)
    {
        temp1 = a % b;
        if(temp1 == 0)
        {
            result_int = a / b;
            printf("%d\n", result_int);
        } 
        else 
        { 
            standardization2(a, b);
        }
    }
    return 0;
}

int standardization1(int a)
{
    if(a < 0) 
    {
        a = -a;
        printf("-1/%d\n", a);
    } else 
    {
        printf("1/%d\n", a);
    }

    return 0;
}

int standardization2(int a, int b)
{
    if (b < 0) 
    {
        b = -b;
        printf("-%d/%d\n", a, b);
    } else 
    {
        printf("%d/%d\n", a, b);
    }

    return 0;
}
