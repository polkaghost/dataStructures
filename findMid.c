#include <stdio.h>
#include <stdlib.h>

int *findMid(int numArray[], int nums)
{
	return &numArray[nums/2];
}

int main()
{
	int numArray[] = {1, 2, 3, 4, 5};
	int nums = sizeof(numArray)/sizeof(numArray[0]);
	int *mid = findMid(numArray, nums);

	printf("%i\n", *mid);

	return 0;	
}
