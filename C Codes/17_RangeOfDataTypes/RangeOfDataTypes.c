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
	power = bit * SizeOfSignedChar;
	start= -(1 << (power - 1));
	end= (1 << (power - 1)) - 1;
	printf("\n Range of Signed char is: %d to %d\n", start, end);

	power = bit * SizeOfUnsignedChar;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\n Range of Unsigned char is: %d to %d\n", start, end);

	power = bit * SizeOfSignedShort;
	start = -(1 << (power - 1));
	end = (1 << (power - 1)) - 1;
	printf("\n Range of Signed short is: %d to %d\n", start, end);

	power = bit * SizeOfUnsignedShort;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\n Range of Unsigned short is: %d to %d\n", start, end);

	power = bit * SizeOfSignedInt;
	start = -(1 << (power - 1));
	end= (1 << (power - 1)) - 1;
	printf("\n Range of Signed int is: %d to %d\n", start, end);

	power = bit * SizeOfUnsignedInt;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\n Range of Unsigned int is: %u to %u\n", start, end);

	power = bit * SizeOfLong;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\n Range of Long is: %u to %u\n", start, end);

	power = bit * SizeOfFloat;
	start = 0;
	end = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\n Range of Float is: %u to %u\n", start, end);
	
	power = bit * SizeOfDouble;
	DoubleStart = 0;
	DoubleEnd = ((1 << (power - 1)) - 1) + (1 << (power - 1));
	printf("\n Range of double is: %llu to %llu\n", DoubleStart, DoubleEnd);

	return 0;
}

