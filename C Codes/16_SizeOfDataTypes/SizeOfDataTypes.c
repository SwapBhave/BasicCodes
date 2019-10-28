#include<stdio.h>
#include<limits.h>

int main(void)
{
	int power;
	long start;
	long end;
	int SizeOfChar = sizeof(char);
	int SizeOfUnsignedChar = sizeof(unsigned char);
	int SizeOfShort = sizeof(short);
	int SizeOfUnsignedShort = sizeof(unsigned short);
	int SizeOfInt = sizeof(int);
	int SizeOfUnsignedInt = sizeof(unsigned int);
	int SizeOfLong = sizeof(long);
	int SizeOfFloat = sizeof(float);
	int SizeOfDouble = sizeof(double);
	printf("\n Size of char is :%d\n", SizeOfChar);
	printf("\n Size of Unsigned char is :%d\n", SizeOfUnsignedChar);
	printf("\n Size of short is :%d\n", SizeOfShort);
	printf("\n Size of Unsigned short is :%d\n", SizeOfUnsignedShort);
	printf("\n Size of int is:%d \n", SizeOfInt);
	printf("\n Size of Unsigned int is :%d\n", SizeOfUnsignedInt);
	printf("\n Size of long is:%ld \n", SizeOfLong);
	printf("\n Size of float is:%lu \n", SizeOfFloat);
	printf("\n Size of double is:%lu \n", SizeOfDouble);
	return 0;
}
