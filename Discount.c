#include <stdio.h>

int main(){
	double quantity, rate_per_unit, amount;
	
	printf("Enter rate per unit: ");
	scanf("%lf", &rate_per_unit);

	printf("Enter quantity: ");
	scanf("%lf", &quantity);

	amount = quantity * rate_per_unit;

	if (amount > 500)
		amount = amount * 0.9;

	printf("Calculated net amount %lf\n", amount);
	
	return 0;
} 
