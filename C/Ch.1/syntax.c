#include <stdio.h>

int main(void){
	int c, openParen, closeParen, openSq, closeSq, openCurl, closeCurl, sQuote, dQuote;

	c = openParen = closeParen = openSq = closeSq = openCurl = closeCurl = sQuote = dQuote = 0;
	while((c = getchar()) != EOF){
		if(c == '(')
			openParen++;
		if(c == ')')
			closeParen++;
		if(c == '[')
			openSq++;
		if(c == ']')
			closeSq++;
		if(c == '{')
			openCurl++;
		if(c == '}')
			closeCurl++;
		if(c == '\'')
			sQuote++;
		if(c == '"')
			dQuote++;
	}

	if(openParen != closeParen)
		printf("Mismatched paren.\n");
	if(openSq != closeSq)
		printf("Mismatched square.\n");
	if(openCurl != closeCurl)
		printf("Mismatched curl.\n");
	if(sQuote%2 != 0)
		printf("Mismatched single quote.\n");
	if(dQuote%2 != 0)
		printf("Mismatched double quote.\n");
	
	return 0;
}
