#include <stdio.h>

int main()
{
	char c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}

	printf("%d\n%d\n", getchar()!=EOF, EOF);

	return 0;
}
