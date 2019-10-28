#include<stdio.h>

int main(void)
{
	int Factorial = 1, Number, Multiplier=1;
	printf("\n Enter Number for Factorial:\n");
	scanf("%d", &Number);
	for (Multiplier = 1; Multiplier <= Number; Multiplier++)
	{
		Factorial = Factorial * Multiplier;
	}
	printf("\n Factorial of %d is : %d\n", Number, Factorial);
	return 0;
}

