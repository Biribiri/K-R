/*  Exercise 2-1. Write a program to determine the ranges of char, short, int, and long 
variables, both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the various 
floating-point types.  */

#include <stdio.h>
#include <limits.h>

int powt(int x);

int main(void){
	
	//size of signed and unsigned should be the same
	printf("Size of char:\t%d bytes\n", sizeof(unsigned char));
	printf("Size of int:\t%d bytes\n", sizeof(unsigned int));
	printf("Size of long:\t%d bytes\n", sizeof(unsigned long));
	printf("Size of short:\t%d bytes\n", sizeof(unsigned short));
	putchar('\n');
	printf("Max value of unsinged char:\t%d \n", powt(sizeof(unsigned char)));
	printf("Max value of unsinged int:\t%d \n", powt(sizeof(unsigned int)));
	printf("Max value of unsinged long:\t%d \n", powt(sizeof(unsigned long)));
	printf("Max value of unsinged short:\t%d \n", powt(sizeof(unsigned short)));
	putchar('\n');
	printf("Range of singed char:\t%d \n", powt(sizeof(signed char))/2);
	printf("Range of singed int:\t%d \n", powt(sizeof(signed int))/2);
	printf("Range of singed long:\t%d \n", powt(sizeof(signed long))/2);
	printf("Range of singed short:\t%d \n", powt(sizeof(signed short))/2);

	return 0;
}

int powt(int n){
	unsigned long i = 1;

	n *= 8;
	while(n-- > 0)
		i *= 2;

	return i-1;
}
