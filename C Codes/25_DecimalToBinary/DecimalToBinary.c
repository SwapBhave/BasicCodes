#include<stdio.h>

int main(int argc, char *argv[],char *envp[])
{
	//Declaration
	int i = 0;
	int DecimalNumber;
	int Reminder;
	int Devisor = 2;
	int Divident;

		int BinaryArray[] = { 0,0,0,0,0,0,0,0 };
		printf("\n Enter Decimal Number between 0 to 256: \n");
		scanf(" %d", &DecimalNumber);
		printf("\n Binary Number is:\n");
		while (DecimalNumber != 0)
		{
			Reminder = DecimalNumber % Devisor;
			DecimalNumber = DecimalNumber / Devisor;
			printf("\n %d", Reminder);
			BinaryArray[i] = Reminder;
			printf("\n a[%d]=%d\n", i, Reminder);
			i++;

		}
		i = 7;
		while (i >= 0)
		{
			printf("\t %d", BinaryArray[i]);
			i--;
		}

		printf("\n");
	

	return 0;
}



  