/*  Exercise 2-1. Write a program to determine the ranges of char, short, int, and long 
variables, both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the various 
floating-point types.  */

#include <stdio.h>

int main(void){
	unsigned char uc = -1;
	unsigned int ui = -1;
	unsigned long ul = -1;
	unsigned short us = -1;
	signed char sc = uc / 2;
	signed int si = ui / 2;
	signed long sl = ul / 2;
	signed short ss = us / 2;


	//size of signed and unsigned should be the same since signed just uses one bit as -/+
	printf("Size of char:\t%d bytes\n", sizeof(char));
	printf("Size of int:\t%d bytes\n", sizeof(int));
	printf("Size of long:\t%d bytes\n", sizeof(long));
	printf("Size of short:\t%d bytes\n", sizeof(short));
	putchar('\n');
	printf("Max value of unsinged char:\t%u \n", uc);
	printf("Max value of unsinged int:\t%u \n", ui);
	printf("Max value of unsinged long:\t%lu \n", ul);
	printf("Max value of unsinged short:\t%hu \n", us);
	putchar('\n');
	printf("Range of singed char:\t%d to %d\n", sc+1, sc);
	printf("Range of singed int:\t%d to %d\n", si+1, si);
	printf("Range of singed long:\t%ld to %ld\n", sl+1, sl);
	printf("Range of singed short:\t%hd to %hd\n", ss+1, ss);

	return 0;
}
