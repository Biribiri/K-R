#include <stdio.h>
#define MINPRINT 5

int getlin(char line[]);

int main(void){
	int len, c;
	char line[MINPRINT];
	
	while((len = getlin(line)) > 0){
		if(len >= MINPRINT){
			printf("%s", line);
			while((c = getchar()) != '\n'){
				printf("%c", c);
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
