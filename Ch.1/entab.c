#include <stdio.h>

int tabspace = 0;

int entab();

int main(void){
	int c;

	while((c = getchar()) != EOF){
		if(c != ' '){
			printf("%c", c);
			tabspace++;
		}
		else
			entab();
	}
	return 0;
}

int entab(){
	int c, spacecount, index;
	char spaces[10];

	++tabspace;
	index = spacecount = 0;
	spaces[index++] = ' ';
	while((tabspace % 8) != 0){
		if((c = getchar()) == ' '){
			spacecount++;
			spaces[index++] = ' ';
		}
		else{
			spaces[index] = '\0';
			printf("%s%c", spaces, c);
			return 0;
		}
	}
	printf("\t");
	return 0;
}
