#include <stdio.h>

double FahrtoCel(int fahr);

int main(void){
	for(int i = 0; i <= 300; i += 20){
		printf("%d\t%g\n", i, FahrtoCel(i));
	}

	return 0;
}

double FahrtoCel(int fahr){
	return 	5 * (fahr - 32) / 9;
}
