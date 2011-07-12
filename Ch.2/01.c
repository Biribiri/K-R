#include <stdio.h>
#include <limits.h>

int main(void){
	
	printf("Size of char %d\n", CHAR_BIT);
	printf("Size of char max %d\n", UCHAR_MAX);
	printf("Size of char min %d\n", SCHAR_MIN);
	printf("Size of int max %d\n", INT_MAX);
	printf("Size of int min %d\n", INT_MIN);
	printf("Size of long max %ld\n", LONG_MAX);
	printf("Size of long min %ld\n", LONG_MIN);
	printf("Size of signed char max %d\n", SCHAR_MAX);
	printf("Size of signed char min %d\n", SCHAR_MIN);
	printf("Size of short max %d\n", SHRT_MAX);
	printf("Size of short min %d\n", SHRT_MIN);
	printf("Size of insined char %u\n", UCHAR_MAX);
	printf("Size of unsigned int %u\n", UINT_MAX);
	printf("Size of unsigned long %lu\n", ULONG_MAX);
	printf("Size of unsigned short %u\n", USHRT_MAX);

	return 0;
}
