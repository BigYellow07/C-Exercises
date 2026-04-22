#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = NULL;
    int count = 0;
    char c;

    while ((c = getchar()) != '\n')
    {
        str = (char*)realloc(str, (count + 1) * sizeof(char));
        str[count] = c;
        count++;
    }

    str = (char*)realloc(str, (count + 1) * sizeof(char));
    str[count] = '\0';

	printf("#include<stdio.h>\n");
	printf("int main()\n{\n");
	printf("    int n,i;\n");
	printf("    scanf(\"%%d\",&n);\n");
	printf("    for(i=0;i<n;i++){\n");
	printf("        printf(\"%s\\n\");\n", str);
	printf("    }\n}\n");

    free(str);
    str = NULL;
    
    return 0;
}
