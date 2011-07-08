#include <stdio.h>

int main(void){
	int c, max;
	int letters[26];

	max = 0;
	//sets cell in letters[] = 0
	for(int i = 0; i < 26; ++i)
		letters[i] = 0;
	//gets input and stores it in letters according to letter
	while( (c = getchar()) != EOF){
		++letters[c - 'a'];
		if(letters[c - 'a'] > max)
				max = (int)letters[c - 'a'];
	}
	//print vertical histogram
	while(max > 0){
		for(int n = 0; n < 26; ++n){
			if(max <= letters[n])
				printf(" | ");
			else
				printf("   ");
		}
		printf("\n");
		--max;
	}
	//print bottom headers
	for(int i = 0; i < 26; ++i)
		printf(" %c ", 'a' + i);
	//freq.
	printf("\n");
	for(int i = 0; i < 26; ++i){
		if(i < 10)
			printf(" %d ", letters[i]);
		else
			printf(" %d ", letters[i]);
	}
	//vertical histogram
	/*for(int i = 0; i < 26; ++i){
		printf("%c[%d]: ", 'a' + i, letters[i]);
		while(letters[i] >= 0){
			printf("-");
			--letters[i];
		}
		printf("\n");
	}*/

	return 0;
}