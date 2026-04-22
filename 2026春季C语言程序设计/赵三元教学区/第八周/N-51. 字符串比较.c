#include <stdio.h>
#include <stdlib.h>

char* read_line(int *len);
int extremum(int a, int b, int c);

int main(void)
{
    int len1, len2, len3;
    char *str1, *str2, *str3;
    char *result;

    str1 = read_line(&len1);
    str2 = read_line(&len2);
    str3 = read_line(&len3);
    
    if(len1 < len2 && len1 < len3)
	{
        result = str1;
    } 
    else if(len2 < len1 && len2 < len3)
	{
        result = str2;
    } 
    else if(len3 < len1 && len3 < len2)
	{
        result = str3;
    }
    else if(len1 == len2 && len1 < len3)
	{
        result = (str1[0] > str2[0]) ? str1 : str2;
    }
    else if(len1 == len3 && len1 < len2)
	{
        result = (str1[0] > str3[0]) ? str1 : str3;
    }
    else if(len2 == len3 && len2 < len1)
	{
        result = (str2[0] > str3[0]) ? str2 : str3;
    }
    else
	{
        if(str1[0] >= str2[0] && str1[0] >= str3[0])
		{
			result = str1;
		}
        else if(str2[0] >= str1[0] && str2[0] >= str3[0])
		{
			result = str2;
		}
        else
		{
			result = str3;
		}
    }

    printf("%s\n", result);

    free(str1);
    free(str2);
    free(str3);
    
    return 0;
}

char* read_line(int *len)
{
    char *str = NULL;
    *len = 0;
    char c;
    while ((c = getchar()) != '\n') {
        str = (char*)realloc(str, (*len + 1) * sizeof(char));
        str[*len] = c;
        (*len)++;
    }

    str = (char*)realloc(str, (*len + 1) * sizeof(char));
    str[*len] = '\0';
    
    return str;
}
