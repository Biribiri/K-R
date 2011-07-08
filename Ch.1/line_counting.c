//counts the number of spaces, tabs, newlines; echos input but removes extra spaces
//replaces tabs with \t and backslashes(?) with \b

#include <stdio.h>

int main(void)
{
	int c, space, tab, newline, spaceCount;

	space = tab = newline = spaceCount = 0;
	while( (c = getchar()) != EOF )
	{
		if(c != ' ')
		{
			if(c == '\n')
				++newline;
			if(c == '\t')
				++tab;
			if(spaceCount > 0)
			{
				spaceCount = 0;
				printf(" ");
			}
			putchar(c);
		}
		if(c == ' ')
		{
			++spaceCount;
			++space;
		}
	}
	printf("Spaces: %d\nTabs: %d\nNew Line: %d\n\n", space, tab, newline);
	
	while( (c = getchar()) != EOF)
	{
		if(c == '\t')
			printf("\\t");
		else if(c == '\b')
			printf("\\b");
		else
			putchar(c);
	}

	return 0;
}
