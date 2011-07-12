#include <stdio.h>

#define MAXLINE 10

int getlin(char line[], int maxline);
void copy(char to[], char from[]);

int main(void){
	int len, max, c;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while((len = getlin(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
		printf("%s", line);
		if(len >= MAXLINE - 1){
			while((c = getchar()) != '\n'){
				putchar(c);
				len++;
			}
		}
		printf(" - %d", len);
	}
	if(max > 0)
		printf("%s\n", longest);

	return 0;
}

int getlin(char s[], int lim){
	int c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';

	return i;
}

void copy(char to[], char from[]){
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
