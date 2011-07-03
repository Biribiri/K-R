#include <stdio.h>

int main()
{
	/*long nc;

	nc = 0;
	while(getchar() != EOF)
	{
		++nc;
		printf("%ld\n", nc);
	}*/

	double nc2;

	for(nc2 = 0; getchar() != EOF; ++nc2)
		;
	printf("%.0f\n", nc2);

	return 0;
}
