#include<stdio.h>

int main(int argc, char *argv[], char *envp)
{
	printf("\nGoing to next line using \\n Escape Sequence -- \n --Now i m on next line\n");
	printf("\nPrinting \t Horizontal  \t tab \t space \t using \\t \t escape \t sequence\n");
	printf("\n \"this is double quated sentence\" using \\\"\\\"  \n");
	printf("\n \'this is double quated sentence\' using \\\'\\\'  \n");
	printf("\nBACKSPACE Turned To BACKSPACE\b Using Escape Sequence \\b\n\n");
	printf("\n \r Demonstrating Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating \r Carriage Return Using \\r Escape Sequence\n");
	printf("Demonstrating Carriage \r Return Using \\r Escape Sequence\n\n");
	
	printf("Demonstrating \x41 Using \\xhh Escape Sequence\n\n");
	printf("Demonstrating \102 Using \\ooo Escape Sequence\n\n"); 


	return 0;
}