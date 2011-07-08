#include <stdio.h>

int tabspace = 0;

void detab(void);

int main(void){
	int c;

	while((c = getchar()) != EOF){
		if(c == '\t')
			detab();
		else{
			printf("%c", c);
			++tabspace;
		}
		tabspace = 0;
	}

	return 0;
}

void detab(void){
	if(tabspace++ == 0)
		printf(" ");
	while((tabspace % 8) != 0)
		printf(" ");
}
