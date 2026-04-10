#include <stdio.h>

int main (void)
{
    char x;
    
    if (scanf("%c", &x) != 1) {
        return 1;
    }

    if (x >= 65 && x <= 90) {
        char lowercase = x + 32;
        printf("%c\n", lowercase);
    } else if (x >= 97 && x <= 122) {
        char capital = x - 32;
        printf("%c\n", capital);
    } else {
        printf("%c\n", x);
    }

    return 0;

}
