/* print Fahr-Cel table
    for fahr = 0, 20, ..., 300*/

#include <stdio.h>

int main(){
	int fahr, cel;
	int lower, upper, step;

	lower = 0;   //lower limit
	upper = 300; //upper limit
	step = 20;   //step size

	printf("Fahr-Cel Table\n");
	fahr = lower;
	while (fahr <= upper)
	{
		cel = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, cel);
		fahr += step;
	}

	printf("\nCel-Fahr Table\n");
	cel = 0;
	fahr = lower;
	while (cel <= upper)
	{
		fahr = (9 * cel / 5) + 32;
		printf("%d\t%d\n", cel, fahr);
		cel += step;
	}
	return 0;
}
