/*  Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.  */

#include <stdio.h>
#define LIM 100

int main(void){
	int i, c;
	char string[LIM];

	i = 0;
	/*for(i = 0; i < LIM-1 && (c = getchar()) != '\n' && c != EOF; i++)
		s[i] = c;*/
	while((c=getchar()) != '\n'){
		if(i < LIM-1)
				string[i++] = c;
		else
			break;
	}
	string[i] = '\0';
	printf("%s\n", string);

	return 0;
}
