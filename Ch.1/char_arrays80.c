//prints all input longer than MINPRINT

#include <stdio.h>
#define MINPRINT 80

int getlin(char line[]);	//gets a line with max lengthe of MINPRINT

int main(void){
	int len, c;
	char line[MINPRINT];
	
	while((len = getlin(line)) > 0){
		if(len >= MINPRINT){
			printf("%s", line);
			while((c = getchar()) != '\n'){
				putchar(c);
				++len;
			}
			printf(" - %d\n", len);
		}
	}

	return 0;
}

int getlin(char line[]){
	int i, c;

	for(i = 0; i < MINPRINT && (c = getchar()) != '\n' && c != EOF; ++i)
		line[i] = c;
	if(i > 0)
		line[i] = '\0';
	
	return i; 
}
