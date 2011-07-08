//replaces tabs with correct ammount of spaces

#include <stdio.h>

int tabspace = 0;

void detab(void);

int main(void){
	int c;

	while((c = getchar()) != EOF){
		if(c == '\n'){
			putchar(c);
			tabspace = 0;
		}
		else if(c == '\t'){
			detab();
		}
		else{
			putchar(c);
			++tabspace;
		}
	}

	return 0;
}

void detab(void){
	//do-while fixes the problem if tab is first input
	do{
		putchar(' ');
	}while(++tabspace % 8);
}
