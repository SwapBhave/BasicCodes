
/***********************Program  4(a)****************************************/

#include<stdio.h>

int Sum(int,int);
int Sub(int, int);
int Mul(int, int);
int Div(int, int);

int main()
{
	while (1)
	{
		int a, b, choice, result;
		printf("\n Enter Two Numbers:\n");
		scanf(" %d %d", &a, &b);
		printf("\n Enter Operation to be Performed:\n");
		printf(" 1.Summation 2.Subtraction 3.Multiplication 4.Division\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			result = Sum(a, b);
			printf("\n Summation of %d and %d is : %d\n", a, b, result);
			break;

		case 2:
			result = Sub(a, b);
			printf("\n Subtraction of %d and %d is : %d\n", a, b, result);
			break;

		case 3:
			result = Mul(a, b);
			printf("\n Multiplication of %d and %d is : %d\n", a, b, result);
			break;

		case 4:
			result = Div(a, b);
			printf("\n Division of %d and %d is : %d\n", a, b, result);
			break;
		}
	}

	return 0;
}

int Sum(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}
