
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char ch;
	printf("enter a character\n");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		printf("Changed case is %c\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		printf("Changed case is %c\n", ch);
	}
	else
	{
		printf("Entered character is not an alphabet");
	}
	return 0;
}