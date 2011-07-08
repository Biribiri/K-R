#include <stdio.h>
#define MAXLINE 10

int getlin(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char rev[], char norm[], int len);

int main(void){
	int len, max, c;
	char line[MAXLINE], longest[MAXLINE], rev[MAXLINE];
	
	max = 0;
	while((len = getlin(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
		reverse(rev, line, len);
		printf("%s\n", rev);
	}
	if(max > 0)
		printf("%s", longest);

	return 0;
}

int getlin(char line[], int max){
	int c, i;
	
	for(i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if(c == '\n'){
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	
	return i;
}

void copy(char to[], char from[]){
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

void reverse(char rev[], char line[], int len){
	int j;
	
	j = 0;
	while(len > 0)
		rev[j++] = line[--len];
	rev[j] = '\0';
}
