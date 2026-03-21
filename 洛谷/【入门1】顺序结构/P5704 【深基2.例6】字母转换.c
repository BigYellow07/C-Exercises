#include <stdio.h>

int main(void)
{
	char lowercase_letter;
	char capital_letter;

	if (scanf("%c", &lowercase_letter) != 1)
	{
		return 0;
	}

	capital_letter = lowercase_letter - 32;

	if (lowercase_letter >= 97 && lowercase_letter <= 122)
	{
		printf("%c\n", capital_letter);
	}
	else
	{
		printf("ERROR! Please enter a lowercase letter!\n");
	}

	return 0;
}
