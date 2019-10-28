#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	printf("\n"); //new line 
	printf("Hello World !!!\n\n");//two new line

	int a = 13;
	printf("Decimal value of A = %d\n", a);//decimal value %d
	printf("Octal value of A = %o\n", a);//octal value %o
	printf("Hex Lower case value of A = %x\n", a);//Hex lower case %x
	printf("Hex Upper case value of A = %X\n", a);//Hex upper case %X
	
	char ch = 'S';
	printf("\nCharacter ch = %c\n", ch);//ch for single character
	char str[] = "Swapnil Bhave";
	printf("Character string ch contain: %s\n", str);//%s for full string

	long num = 15101995L;
	printf("\nLong integer=%ld\n", num);//%ld for long

	unsigned int b = 9;
	printf("\n Unsigned int 'b' = %u\n", b);

	float f_num = 3012.1995f;
	printf("\nfloating point num with %%f is: %f\n", f_num);
	printf("floating point num with %%4.2f is: %4.2f\n", f_num);
	printf("floating point num with %%2.5f is: %4.2f\n", f_num);

	double d_pi = 3.14159265358979323846;
	printf("\nDouble precision floating point number without exponential = %g\n", d_pi);
	printf("Double precision floating point number with exponential = %e\n", d_pi);
	printf("Double precision floating point number with exponential = %E\n", d_pi);

	printf("\nDouble Hexadecimal = %a\n",d_pi);
	printf("Double Hexadecimal = %A\n",d_pi);


	return 0;
}