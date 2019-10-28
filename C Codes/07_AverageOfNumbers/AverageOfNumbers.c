#include<stdio.h>

int main(void)
{
	int sum=0, count = 0,num=0;
	float avg;
	printf("\n Enter the Numbers: Press 'A' for average\n");
	while(scanf("%d", &num)==1)
	{
		sum = sum + num;
		count++;
		printf("Sum is:%d | Count is:%d\n", sum, count);
	}
	avg = sum / count;
	printf("\n Average is:%f",avg);
}