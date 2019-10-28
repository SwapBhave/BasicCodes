#include<stdio.h>


int main()
{
	int i;
	int arr[10];
	int *ptr;
	ptr = &arr;
	printf("\nEnter 10 elements in array\n");
	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &arr[i]);
		printf("Value of a[%d] is: %d\n", i, *ptr++);
	}
	return 0;
}