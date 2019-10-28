#include<stdio.h>

int main(void)
{
	int choice;
	printf("Enter Number Between 1 to 7 :\n");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("1st Day is : Monday\n");
			break;

		case 2:
			printf("2nd Day is :Tuesday\n");
			break;

		case 3:
			printf("3rd Day is : Wednesday\n");
			break;

		case 4:
			printf("4th Day is : Thursday\n");
			break;

		case 5:
			printf("5th Day is : Friday\n");
			break;

		case 6:
			printf("6th Day is : Saturday\n");
			break;

		case 7:printf("7th Day is : Sunday\n");
			break;

		default:
			printf("Enter Valid Number\n");
			break;
	}
	return 0;
}