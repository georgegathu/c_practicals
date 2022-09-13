#include <stdio.h>

/**
* Relational Operators used
* 1. == ( equal to )
* 2. != ( not equal to )
* 3. >  ( greater than )
* 4. <  ( less than )
* 5. >= ( greater than or equal to )
* 6. <= ( less than or equal to )
*/

int main(){
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);
	
	if (a > b){
		printf("%d is big\n", a);
	}

	else{
	printf("%d is big\n", b);
	}

	return 0;
}
