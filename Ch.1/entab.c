//replaces spaces with appropiate amount of tabs

#include <stdio.h>

int tabspace = 0;

int entab();

int main(void){
	int c;

	while((c = getchar()) != EOF){
		if(c == ' ')
			entab();
		else{
			putchar(c);
			tabspace++;
			if(c == '\n')
				tabspace = 0;
		}
	}
	return 0;
}

int entab(){
	int c, spacecount = 0;

	while(++tabspace % 8){
		if((c = getchar()) == ' ')
			spacecount++;
		else{
			while(spacecount-- >= 0)
				putchar('*');
			putchar(c);
			return 0;
		}
	}
	putchar('\t');

	return 0;
}
