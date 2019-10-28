#include<stdio.h>


int main(int argc, char *argv[])
{
	int i, sum=0;
	float average=0.00;
	int count=0;
	printf("\n Arguments are: \n");
	for (i = 1; i < argc; i++)
	{
		printf("a[%d]=%d\n", i,atoi(argv[i]));
		count++;
		sum = sum + atoi(argv[i]);
	}
	average = sum / count;
	printf("Average Of Given number is: %f", average);
	return 0;
}
