#include <stdio.h>
/**
 *LOGICAL OPERATORS 
 *1. && (Logical and)
 *2. || (Logical or)
 *3. !  (Logical not)
 */
int main(){
	int x, y, z;

	printf("Input x: ");
	scanf("%d", &x);

	printf("Input y: ");
	scanf("%d", &y);

	printf("Input z: ");
	scanf("%d", &z);
	
	if (x > y && x > z)
		printf("%d is big\n", x);
	
	else if (y > z)
		printf("%d is big\n", y);
	
	else
		printf("%d is big\n", z);

	return 0;
}
