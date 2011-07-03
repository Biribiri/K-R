#include <stdio.h>

void remComments();

int main(void){
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '/'){
			remComments();
		}
		else
			printf("%c", c);
	}

	return 0;
}

void remComments(){
	int c;

	if((c = getchar()) == '/'){
		while((c = getchar()) != '\n')
			;
	}
	else if(c == '*'){
		while((c = getchar()) != '*')
			;
		c = getchar();
	}
}
