/* Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types. */

#include <stdio.h>

int powt(int n);

int main(void){
	//using variables so program doesn't have to redo the same thing
	unsigned char c;
	unsigned int i;
	unsigned long l;
	unsigned short s;

	//size of signed and unsigned should be the same since signed just uses one bit as -/+
	printf("Size of char:\t%u bytes\n", c = sizeof(char));
	printf("Size of int:\t%u bytes\n", i = sizeof(int));
	printf("Size of long:\t%lu bytes\n", l = sizeof(long));
	printf("Size of short:\t%u bytes\n", s = sizeof(short));
	putchar('\n');
	printf("Max value of unsinged char:\t%u \n", c = powt(c));
	printf("Max value of unsinged int:\t%u \n", i = powt(i));
	printf("Max value of unsinged long:\t%lu \n", l = powt(l));
	printf("Max value of unsinged short:\t%u \n", s = powt(s));
	putchar('\n');
	printf("Range of singed char:\t-%u to %u\n",  c / 2 + 1, c / 2);
	printf("Range of singed int:\t-%u to %u\n", i / 2 + 1, i / 2);
	printf("Range of singed long:\t-%lu to %lu\n", l / 2 + 1, l / 2);
	printf("Range of singed short:\t-%u to %u\n", s / 2 + 1, s / 2);

	return 0;
}

int powt(int n){
	unsigned long i = 1;

	n *= 8;
	while(n-- > 0)
	i *= 2;

	return i-1;
}
