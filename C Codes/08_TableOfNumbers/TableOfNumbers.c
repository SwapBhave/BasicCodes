
#include<stdio.h>

int main(void)
{
	int num,i,table;
	printf("\n Enter the Number for table: \n");
	scanf("%d",&table);
	num = table;
	for (i = 1; i < 10;i++)
	{
		num = i * table;
		printf("\n %d*%d=%d \n", i, table, num);
	}
	return 0;
}