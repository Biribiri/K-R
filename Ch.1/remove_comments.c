//adds comments

#include <stdio.h>

void remComments(int star);	//bool y u no exist

int main(void){
	int c;
	
	while((c = getchar()) != EOF){
		if(c == '/'){
			remComments(0);
		}
		else
			printf("%c", c);
	}

	return 0;
}

void remComments(int star){
	int c;

	if((c = getchar()) == '/'){
		while((c = getchar()) != '\n')
			;
	}
	else if(c == '*' || star == 1){
		while((c = getchar()) != '*')
			;
		//incase it isn't the end of a comment
		if((c = getchar()) != '/')
			remComments(1);
	}
}
