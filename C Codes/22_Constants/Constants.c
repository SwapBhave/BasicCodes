#include<stdio.h>

#define MY_PI 3.1415926535897932

enum {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

enum {Jan = 1, Feb, Mar, April, May, June, July, Aug, Spt, Oct, Nov, Dec};

enum Numbers {One,Two,Three,Four,Five=5,Six,Seven,Eight,Nine,Ten};

enum boolean {True=1,False=0};

int main(int argc, char *argv[], char *envp[])
{
	printf("\nMonday is:%d", Monday);
	printf("\nTuesday is:%d", Tuesday);
	printf("\nWednesday is:%d", Wednesday);
	printf("\nThursday is:%d", Thursday);
	printf("\nFriday is:%d", Friday);
	printf("\nSaturday is:%d", Saturday);
	printf("\nSunday is:%d\n", Sunday);

	printf("\nJan is : %d\n", Jan);
	printf("Feb is : %d\n", Feb);
	printf("Mar is : %d\n", Mar);
	printf("April is : %d\n", April);
	printf("May is : %d\n", May);
	printf("June is : %d\n", June);
	printf("July is : %d\n", July);
	printf("Aug is : %d\n", Aug);
	printf("Spt is : %d\n", Spt);
	printf("Oct is : %d\n", Oct);
	printf("Nov is : %d\n", Nov);
	printf("Dec is : %d\n", Dec);

	printf("\nOne is at:%d", One);
	printf("\nTwo is at:%d", Two);
	printf("\nThree is at:%d", Three);
	printf("\nFour is at:%d", Four);
	printf("\nFive is at:%d", Five);
	printf("\nSix is at:%d", Six);
	printf("\nSeven is at:%d", Seven);
	printf("\nEight is at:%d", Eight);
	printf("\nNine is at:%d", Nine);
	printf("\nTen is at:%d\n", Ten);

	printf("\nValue of TRUE is:%d", True);
	printf("\nValue of FALSE is:%d\n", False);

	printf("\nValue of MY_PI is : %3.8f\n", MY_PI);

	return 0;
}