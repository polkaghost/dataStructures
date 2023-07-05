#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int num;
	int rem;
	int seen[10] = {0};

	printf("Enter a number\n");
	scanf("%i", &num);

	while(num > 0){
		rem = num % 10;

		if(seen[rem] == 1)
			break;

		seen[rem] = 1;

		num = num / 10;
	}

	if(num > 0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}
