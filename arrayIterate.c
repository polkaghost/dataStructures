#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int numArray[] = {1, 2, 3, 4, 5};

	for(i = 0; i < sizeof(numArray)/sizeof(numArray[0]); i++)
{
	printf("%i\n", numArray[i]);
}
	return 0;
}

