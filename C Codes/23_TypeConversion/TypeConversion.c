#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	//Implicit
	int a = 5;
	float f = 7.905;
	float Result_Float;
	int Result_Int;
	
	Result_Float = a + f;
	Result_Int = a + f;
	
	printf("\n Addition of %f and %d is: \n in Float is :%2.3f \n in Int is:%d\n", f, a, Result_Float, Result_Int);

	//Explicit
	float f_explicit;
	int i_explicit;

	f_explicit = 3.1234;
	i_explicit = (int)f_explicit;

	printf("\n floating point number %1.4f after typecasted to int explicity is: %d\n",f_explicit,i_explicit);

	return 0;
}