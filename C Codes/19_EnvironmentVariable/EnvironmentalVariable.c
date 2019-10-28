#include<stdio.h>

int main(int argc, char *argv[],char *envp[])

{
	int i;
	for (i = 0; i != envp; i++)
	{
		printf("\n%s\n", envp[i]);
	}
	return 0;
}
