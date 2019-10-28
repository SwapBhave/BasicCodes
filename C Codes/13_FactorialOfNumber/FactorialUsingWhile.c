#include<stdio.h>

int main()
{
	int num;
	int Multiplier = 1;
	int Factorial = 1;
	printf("\nEnter Number for Factorial:\n");
	scanf("%d", &num);
	while (Multiplier <= num)
	{
		Factorial = Factorial * Multiplier;
		Multiplier++;
	}
	printf("\n Factorial of Number is : %d", Factorial);

	return 0;
}




//1x2x3x4x5x6x7x8x9