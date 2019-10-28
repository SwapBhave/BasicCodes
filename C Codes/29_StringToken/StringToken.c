#include<stdio.h>
#include<string.h>

int main()
{
	char *str = "India is My Country";
	printf("%s \n", str);
	strtok(str, " ");
	printf_s("%s \n", str);
	
	while (str != NULL)
	{
		strtok(NULL, " ");
		printf_s("%s \n", str);
	}
	return 0;
}
