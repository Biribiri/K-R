#include <stdio.h>

//where to fold the text
#define FOLD 10

int getword(char word[]);

int main(void){
	//ln is length of word, line is length of line
	int ln, line;	
	char word[100];

	line = ln = 0;
	//put the length of the word in ln, -1 if EOF
	while((ln = getword(word)) != -1){
		//if the word would extend past FOLD, newline
		if((ln + line) >= FOLD){
			printf("\n%s ", word);
			line = 0;
		}
		//else just print the word
		else{
			printf("%s ", word);
			line += ln;
		}
	}
		
	return 0;
}

//puts the next word into word[]
int getword(char word[]){
	int c, index;

	index = 0;
	while((c = getchar()) != ' ' && c != '\n' && c != EOF)
		word[index++] = c;
	if(c == EOF)
		return -1;
	if(c == '\n')
		word[index++] = '\n';
	word[index++] = '\0';

	//returns length of the word
	return index;
}
