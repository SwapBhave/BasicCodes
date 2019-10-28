#include<stdio.h>
#include<limits.h>

int main(void)
{
	//Declaration
	int bit = 8;
	int power;
	long start;
	long end;
	double DoubleStart;
	double DoubleEnd;

	//Size Calculation
	int SizeOfSignedChar = sizeof(char);
	int SizeOfUnsignedChar = sizeof(signed char);
	int SizeOfSignedShort = sizeof(short);
	int SizeOfUnsignedShort = sizeof(unsigned short);
	int SizeOfSignedInt = sizeof(int);
	int SizeOfUnsignedInt = sizeof(unsigned int);
	int SizeOfLong=sizeof(long);
	int SizeOfFloat=sizeof(float);
	int SizeOfDouble=sizeof(double);
	
	//Size Printing
	printf("\n Size of Signed char is :%d\n", SizeOfSignedChar);//
	printf("\n Size of Unsigned char is :%d\n", SizeOfUnsignedChar);//
	printf("\n Size of Signed short is :%d\n",SizeOfSignedShort);//
	printf("\n Size of Unsigned short is :%d\n", SizeOfUnsignedShort);//
	printf("\n Size of Signed int is:%d \n", SizeOfSignedInt);	
	printf("\n Size of Unsigned int is :%d\n", SizeOfUnsignedInt);
	printf("\n Size of long is:%ld \n", SizeOfLong);
	printf("\n Size of float is:%lu \n", SizeOfFloat);
	printf("\n Size of double is:%lu \n\n\n", SizeOfDouble);
	
	//Range Printing
	printf("\n------------------------------------------------------------------------------------------------------\n\n");
	printf("\t Data Type \t\t\t Range \t\t\t Size \t\t Format Spcifier\n\n");
	printf("\n------------------------------------------------------------------------------------------------------\n\n");
	power = bit * SizeOfSignedChar;
	start= -(1 << (power - 1));
	end= (1 << (power - 1)) - 1;
	printf("\t   char \t\t\t%d to %d\t\t   %d\t\t %%c \n\n",start,end,SizeOfSignedChar);

	power = bit * SizeOfUnsignedChar;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\t   Unsigned char \t\t  %d to %d\t\t   %d\t\t %%c \n\n", start, end, SizeOfUnsignedChar);

	power = bit * SizeOfSignedShort;
	start = -(1 << (power - 1));
	end = (1 << (power - 1)) - 1;
	printf("\t   Short \t\t\t%d to %d\t\t   %d\t\t %%d \n\n", start, end, SizeOfSignedShort);

	power = bit * SizeOfUnsignedShort;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\t   Unsigned Short \t\t  %d to %d\t\t   %d\t\t %%d \n\n", start, end, SizeOfUnsignedShort);

	power = bit * SizeOfSignedInt;
	start = -(1 << (power - 1));
	end= (1 << (power - 1)) - 1;
	printf("\t   Int \t\t\t %d to %d\t   %d\t\t %%d \n\n", start, end, SizeOfSignedInt);

	power = bit * SizeOfUnsignedInt;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\t   Unsigned Int \t\t%u to %u\t\t   %d\t\t %%u \n\n", start, end, SizeOfUnsignedInt);

	power = bit * SizeOfLong;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\t   Long \t\t\t %u to %u\t   %d\t\t %%u \n\n", start, end, SizeOfLong);

	power = bit * SizeOfFloat;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\t   Float \t\t\t %u to %u\t   %d\t\t %%u \n\n", start, end, SizeOfFloat);
	
	power = bit * SizeOfDouble;
	DoubleStart = 0;
	DoubleEnd = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\t   Double \t\t %llu to %llu\t   %d\t\t %%llu \n\n",DoubleStart, DoubleEnd, SizeOfDouble);
	printf("\n------------------------------------------------------------------------------------------------------\n\n");

	return 0;
}

